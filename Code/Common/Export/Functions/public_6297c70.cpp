#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_6297c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6297cdd _public_6297cdd
#define public_6297ce6 _public_6297ce6
#define public_6297d24 _public_6297d24
#define public_6297d63 _public_6297d63
#define public_6297d68 _public_6297d68
#define public_6297dff _public_6297dff
#define public_6297e30 _public_6297e30
#define public_6297e7c _public_6297e7c
#define public_6297eac _public_6297eac
#define public_6297f7d _public_6297f7d

PROC_DECLARE(0x6297c70, internal_6297c70, public_6297c70);
extern "C" NAKED register_t __cdecl internal_6297c70()
{
    __asm
    {
        sub esp, 0xC0
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        push edi
        call dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [ebx]
        push 0
        mov ecx, ebx
        mov ebp, eax
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        cmp dword ptr ds : [ebx+0x1FC], 0xFFFFFFFF
        mov ecx, 9
        lea edi, ss:[esp+0x40]
        rep movsd
        push ebp
        je public_6297ce6
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_6297cdd
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297cdd : nop
        add esi, 0x40
        push esi
        jmp public_6297d68
        public_6297ce6 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        jne public_6297d24
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297d24 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        add esi, 0x1C
        push esi
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6297d63
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297d63 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        public_6297d68 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [ebx+0x218]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        je public_6297e30
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xD4]
        mov ecx, dword ptr ds : [public_6399040]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_6399040]
        mov ecx, 9
        lea edi, ss:[esp+0x88]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x218]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC4]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_6297dff
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297dff : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x40
        push esi
        lea edx, ss:[esp+0x8C]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        jmp public_6297eac
        public_6297e30 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push eax
        call dword ptr ds : [ecx+0x98]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x88]
        rep movsd
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        jne public_6297e7c
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297e7c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        public_6297eac : nop
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x70], eax
        fsubp 
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x7C], ecx
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x68], edx
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x60]
        push eax
        mov eax, dword ptr ss : [esp+0x60]
        fsubp 
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x84], ecx
        fmul dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x18]
        push ecx
        fmul dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x58]
        fsubp 
        fstp dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x44]
        fxch 
        mov dword ptr ss : [esp+0x8C], edx
        fstp dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        fstp dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x50]
        push eax
        mov eax, dword ptr ss : [esp+0x68]
        push ecx
        mov ecx, dword ptr ss : [esp+0x60]
        push edx
        mov edx, dword ptr ss : [esp+0x58]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0xAC]
        call public_6284f70
        mov eax, dword ptr ds : [public_63fc184]
        test eax, eax
        jne public_6297f7d
        call public_6391cf0
        mov dword ptr ds : [public_63fc184], eax
        public_6297f7d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x8C]
        push edx
        lea edx, ss:[esp+0xB4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        lea edi, ds:[ebx+0x22C]
        mov ecx, 9
        lea esi, ss:[esp+0xAC]
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC0
        ret 
        UNREACHABLE_TRAP(0x6297c70)
    }
}

#undef public_6297cdd
#undef public_6297ce6
#undef public_6297d24
#undef public_6297d63
#undef public_6297d68
#undef public_6297dff
#undef public_6297e30
#undef public_6297e7c
#undef public_6297eac
#undef public_6297f7d
