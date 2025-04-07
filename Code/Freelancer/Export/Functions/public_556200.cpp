#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556200);

#define public_556212 _public_556212
#define public_556241 _public_556241

PROC_DECLARE(0x556200, internal_556200, public_556200);
/* CHUNK of public_558870 */
extern "C" NAKED register_t __cdecl internal_556200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [public_67999c]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_556241
        push edi
        mov edi, 0x100002
        public_556212 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push eax
        push 0x161
/*FIXUP push offset public_5e1260 @0x556225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1260
/*FIXUP push offset public_5e1228 @0x55622a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e1228
        push edi
        call dword ptr ds : [edx]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [public_67999c]
        add esp, 0x18
        cmp esi, eax
        jne public_556212
        pop edi
        public_556241 : nop
        mov ecx, dword ptr ds : [public_6799a0]
        xor eax, eax
        test ecx, ecx
        sete al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x556200)
        ASM_EXPORT_ENTRY_FIRST(0x556212, public_556212)
        ASM_EXPORT_ENTRY_LAST(0x556241, public_556241)
    }
}

#undef public_556212
#undef public_556241

#pragma init_seg(compiler)
extern "C" void const* const public_556212 = __AsmFindLabelExport(&internal_556200, 0x556212);
extern "C" void const* const public_556241 = __AsmFindLabelExport(&internal_556200, 0x556241);
