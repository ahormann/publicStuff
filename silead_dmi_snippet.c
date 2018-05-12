static const struct property_entry trekstor_primebook_c11_props[] = {
	PROPERTY_ENTRY_U32("touchscreen-size-x", 1920),
	PROPERTY_ENTRY_U32("touchscreen-size-y", 1530),
	PROPERTY_ENTRY_STRING("firmware-name",
			      "gsl1680-trekstor-primebook-c11.fw"),
	PROPERTY_ENTRY_U32("silead,max-fingers", 10),
	PROPERTY_ENTRY_BOOL("silead,home-button"),
	PROPERTY_ENTRY_BOOL("touchscreen-inverted-y"),
	{ }
};

static const struct silead_ts_dmi_data trekstor_primebook_c11_data = {
	.acpi_name	= "MSSL1680:00",
	.properties	= trekstor_primebook_c11_props,
};

//in  static const struct dmi_system_id silead_ts_dmi_table[] = {
	{
		/* Trekstor Primebook C11 */
		.driver_data = (void *)&trekstor_primebook_c11_data,
		.matches = {
			DMI_MATCH(DMI_SYS_VENDOR, "TREKSTOR"),
			DMI_MATCH(DMI_PRODUCT_NAME, "Primebook C11"),
		},
	},