#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27390);

#define public_6c27429 _public_6c27429
#define public_6c27430 _public_6c27430
#define public_6c27444 _public_6c27444

PROC_DECLARE(0x6c27390, internal_6c27390, public_6c27390);
extern "C" NAKED register_t __cdecl internal_6c27390()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        push edi
        xor eax, eax
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x14]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        mov dword ptr ss : [esp+0x24], 0x80000000
        mov dword ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x30], 3
        mov dword ptr ss : [esp+0x34], 0x8000080
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x14], 0x34
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        xor ebx, ebx
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6c27430
        mov eax, dword ptr ds : [esi]
        push ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push 4
        lea edx, ss:[esp+0x50]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6c27444
        cmp dword ptr ss : [esp+0x48], 4
        jne public_6c27444
        fld dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [eax]
        mov ebx, 1
        public_6c27429 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_6c27430 : nop
        xor eax, eax
        test ebx, ebx
        setne al
        pop edi
        pop esi
        pop ebx
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        public_6c27444 : nop
        xor ebx, ebx
        jmp public_6c27429
        UNREACHABLE_TRAP(0x6c27390)
    }
}

#undef public_6c27429
#undef public_6c27430
#undef public_6c27444
