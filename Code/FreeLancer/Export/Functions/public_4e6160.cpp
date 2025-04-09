#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405930);
CLANG_FORWARD_PROC_SYMBOL(public_4e6160);

#define public_4e61e0 _public_4e61e0
#define public_4e6203 _public_4e6203
#define public_4e6230 _public_4e6230
#define public_4e624d _public_4e624d
#define public_4e625a _public_4e625a

PROC_DECLARE(0x4e6160, internal_4e6160, public_4e6160);
extern "C" NAKED register_t __cdecl internal_4e6160()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x398]
        test eax, eax
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        je public_4e625a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e625a
        add eax, 0xC
        test eax, eax
        je public_4e625a
        mov ebp, dword ptr ds : [eax+4]
        test ebp, ebp
        mov dword ptr ss : [esp+0x14], ebp
        je public_4e625a
        mov eax, dword ptr ss : [ebp+0x4C]
        and eax, 0x103
        cmp eax, 0x103
        jne public_4e625a
        mov edi, dword ptr ds : [public_5c6584]
        lea ecx, ss:[esp+0x18]
        lea esi, ss:[ebp+0x144]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1C], 1
        call edi
        test eax, eax
        je public_4e6203
        mov ebp, dword ptr ds : [public_5c6580]
        add ebx, 0x3A0
        lea ecx, ds:[ecx]
        public_4e61e0 : nop
        push 0
        mov ecx, eax
        call ebp
        push eax
        mov ecx, ebx
        call public_405930
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call edi
        test eax, eax
        jne public_4e61e0
        mov ebx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x14]
        public_4e6203 : nop
        push 0x1FE0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c64f4]
        mov edi, dword ptr ds : [public_5c64f0]
        lea eax, ss:[esp+0x20]
        lea esi, ss:[ebp+0xE4]
        push eax
        mov ecx, esi
        call edi
        test eax, eax
        je public_4e625a
        nop 
        lea esp, ss:[esp]
        public_4e6230 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x84]
        cmp eax, 0xFFFFFFFF
        je public_4e624d
        push 1
        push eax
        lea ecx, ds:[ebx+0x3A0]
        call public_405930
        public_4e624d : nop
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call edi
        test eax, eax
        jne public_4e6230
        public_4e625a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4e6160)
    }
}

#undef public_4e61e0
#undef public_4e6203
#undef public_4e6230
#undef public_4e624d
#undef public_4e625a
