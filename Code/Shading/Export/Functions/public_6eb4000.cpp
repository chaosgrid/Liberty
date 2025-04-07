#include "Shading-PCH.h"


#define public_6eb4019 _public_6eb4019
#define public_6eb40ae _public_6eb40ae
#define public_6eb40b0 _public_6eb40b0
#define public_6eb40b7 _public_6eb40b7
#define public_6eb40cd _public_6eb40cd

PROC_DECLARE(0x6eb4000, internal_6eb4000, public_6eb4000);
extern "C" NAKED register_t __cdecl internal_6eb4000()
{
    __asm
    {
        sub esp, 0x34
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        jne public_6eb4019
        or eax, 0xFFFFFFFF
        pop ebp
        add esp, 0x34
        ret 8
        public_6eb4019 : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        push edi
        xor eax, eax
        mov dword ptr ss : [esp+0x14], offset public_6ed4094
        mov ecx, 0xB
        lea edi, ss:[esp+0x18]
        rep stosd
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x18], 0x34
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], offset public_6ed4374
        mov dword ptr ss : [esp+0x20], offset public_6ed4264
        mov dword ptr ss : [esp+0x28], 0xC0000000
        mov dword ptr ss : [esp+0x34], 2
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_6eb40b7
        mov edx, dword ptr ds : [esi]
        push ebx
        lea eax, ss:[esp+0x4C]
        push eax
        push 4
        lea ecx, ss:[ebp+8]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_6eb40ae
        cmp dword ptr ss : [esp+0x48], 4
        jne public_6eb40ae
        mov ebx, 1
        jmp public_6eb40b0
        public_6eb40ae : nop
        xor ebx, ebx
        public_6eb40b0 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_6eb40b7 : nop
        xor eax, eax
        test ebx, ebx
        setne al
        dec eax
        test eax, 0x80004005
        jge public_6eb40cd
        mov dword ptr ss : [ebp+8], 0xFFFFFFFF
        public_6eb40cd : nop
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x14]
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 0x34
        ret 8
        UNREACHABLE_TRAP(0x6eb4000)
    }
}

#undef public_6eb4019
#undef public_6eb40ae
#undef public_6eb40b0
#undef public_6eb40b7
#undef public_6eb40cd
