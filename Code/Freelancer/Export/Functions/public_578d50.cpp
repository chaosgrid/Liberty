#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578d50);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c3c0b);

#define public_578ddb _public_578ddb
#define public_578ddd _public_578ddd
#define public_578e10 _public_578e10
#define public_578e37 _public_578e37

PROC_DECLARE(0x578d50, internal_578d50, public_578d50);
/* CHUNK of public_579170 */
extern "C" NAKED register_t __cdecl internal_578d50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5c3c0b @0x578d52*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c3c0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp eax, ebx
        jne public_578e37
        push ebp
        push edi
        push 0x384
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_578ddb
        mov ecx, ebp
        call public_59f860
        mov dword ptr ss : [ebp+0x338], 0x40400000
        mov dword ptr ss : [ebp+0x380], ebx
        mov dword ptr ss : [ebp], offset public_5e44a4
        mov dword ptr ss : [ebp+0x7C], offset public_5e4498
        mov dword ptr ss : [ebp+0x33C], ebx
        mov byte ptr ds : [public_67c3e0], bl
        mov al, byte ptr ss : [ebp+0x6C]
        and al, 0xFE
        mov byte ptr ss : [ebp+0x32C], bl
        mov byte ptr ss : [ebp+0x6C], al
        mov dword ptr ss : [ebp+0x334], ebx
        jmp public_578ddd
        public_578ddb : nop
        xor ebp, ebp
        public_578ddd : nop
        push ebx
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ss : [ebp]
        push ebx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [eax+0x24]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5e4430
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x18]
        jb public_578e10
        mov eax, 0x1F
        public_578e10 : nop
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, offset public_5e4430
        mov edi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov dword ptr ss : [ebp+0x14], eax
        pop edi
        mov dword ptr ss : [ebp+0x10], offset public_5e4430
        pop ebp
        public_578e37 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x578d50)
        ASM_EXPORT_ENTRY_FIRST(0x578ddb, public_578ddb)
        ASM_EXPORT_ENTRY(0x578ddd, public_578ddd)
        ASM_EXPORT_ENTRY(0x578e10, public_578e10)
        ASM_EXPORT_ENTRY_LAST(0x578e37, public_578e37)
    }
}

#undef public_578ddb
#undef public_578ddd
#undef public_578e10
#undef public_578e37

#pragma init_seg(compiler)
extern "C" void const* const public_578ddb = __AsmFindLabelExport(&internal_578d50, 0x578ddb);
extern "C" void const* const public_578ddd = __AsmFindLabelExport(&internal_578d50, 0x578ddd);
extern "C" void const* const public_578e10 = __AsmFindLabelExport(&internal_578d50, 0x578e10);
extern "C" void const* const public_578e37 = __AsmFindLabelExport(&internal_578d50, 0x578e37);
