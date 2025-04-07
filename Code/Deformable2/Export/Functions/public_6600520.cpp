#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600520);

#define public_66005a9 _public_66005a9
#define public_66005ad _public_66005ad
#define public_66005b1 _public_66005b1
#define public_66005dd _public_66005dd
#define public_66005df _public_66005df
#define public_66005e6 _public_66005e6

PROC_DECLARE(0x6600520, internal_6600520, public_6600520);
extern "C" NAKED register_t __cdecl internal_6600520()
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
        mov dword ptr ss : [esp+0x10], offset public_6602040
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
        je public_66005e6
        mov ebx, dword ptr ss : [esp+0x54]
        test ebx, ebx
        je public_66005ad
        mov eax, dword ptr ds : [esi]
        push 0
        push edi
        push esi
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+0x4C]
        shr eax, 2
        cmp eax, ecx
        jae public_66005a9
        mov ecx, eax
        public_66005a9 : nop
        mov dword ptr ds : [ebx], ecx
        jmp public_66005b1
        public_66005ad : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        public_66005b1 : nop
        mov eax, dword ptr ss : [esp+0x50]
        push 0
        lea edx, ss:[esp+0x4C]
        push edx
        lea ebx, ds:[ecx*4]
        mov ecx, dword ptr ds : [esi]
        push ebx
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66005dd
        cmp dword ptr ss : [esp+0x48], ebx
        jne public_66005dd
        mov ebx, 1
        jmp public_66005df
        public_66005dd : nop
        xor ebx, ebx
        public_66005df : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_66005e6 : nop
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
        UNREACHABLE_TRAP(0x6600520)
    }
}

#undef public_66005a9
#undef public_66005ad
#undef public_66005b1
#undef public_66005dd
#undef public_66005df
#undef public_66005e6
