#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_630e870);
CLANG_FORWARD_PROC_SYMBOL(public_630e960);
CLANG_FORWARD_PROC_SYMBOL(public_630f140);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630e9f0 _public_630e9f0
#define public_630ea70 _public_630ea70
#define public_630eb01 _public_630eb01
#define public_630eb4a _public_630eb4a
#define public_630eb56 _public_630eb56

PROC_DECLARE(0x630e960, internal_630e960, public_630e960);
extern "C" NAKED register_t __cdecl internal_630e960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xD8
        push ebx
        mov ebx, dword ptr ss : [esp+0xEC]
        push esi
        mov esi, dword ptr ss : [esp+0xEC]
        push edi
        mov edi, dword ptr ss : [esp+0xE8]
        push ebx
        push esi
        push eax
        push edi
        call public_630e870
        add esp, 0x10
        test al, al
        je public_630eb56
        mov edx, dword ptr ds : [esi]
        cmp edi, edx
        je public_630eb4a
        push ebp
        lea ebp, ds:[ebx+0x10]
        mov ecx, 9
        mov esi, ebp
        lea edi, ss:[esp+0x1C]
        rep movsd
        add ebx, 4
        mov ecx, ebx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x48], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630e9f0
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630e9f0 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov esi, dword ptr ss : [esp+0x78]
        mov ecx, ebx
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], esi
        mov ecx, 9
        lea esi, ss:[esp+0x4C]
        mov edi, ebp
        rep movsd
        mov ecx, 9
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x1C]
        rep movsd
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x48], edx
        mov edx, dword ptr ss : [esp+0xEC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630ea70
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630ea70 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x88]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x70]
        call public_6284f70
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0xC0]
        call public_630f140
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630eb01
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630eb01 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea ecx, ss:[esp+0x90]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], ecx
        mov edi, ebp
        mov ecx, 9
        lea esi, ss:[esp+0x88]
        rep movsd
        pop ebp
        public_630eb4a : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xD8
        ret 
        public_630eb56 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0xD8
        ret 
        UNREACHABLE_TRAP(0x630e960)
    }
}

#undef public_630e9f0
#undef public_630ea70
#undef public_630eb01
#undef public_630eb4a
#undef public_630eb56
