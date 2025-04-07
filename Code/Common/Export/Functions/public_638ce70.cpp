#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_636ec70);
CLANG_FORWARD_PROC_SYMBOL(public_638ce70);

#define public_638cea8 _public_638cea8
#define public_638cec5 _public_638cec5
#define public_638cef2 _public_638cef2
#define public_638cefb _public_638cefb
#define public_638cf06 _public_638cf06
#define public_638cf35 _public_638cf35

PROC_DECLARE(0x638ce70, internal_638ce70, public_638ce70);
extern "C" NAKED register_t __cdecl internal_638ce70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_658b80c]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        call public_636ec70
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x34]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [public_658b8e4]
        add esp, 4
        inc ecx
        mov dword ptr ds : [public_658b8e4], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov ebx, dword ptr ss : [ebp+0x20]
        test ebx, ebx
        je public_638cf06
        public_638cea8 : nop
        test dword ptr ds : [ebx+0x50], 0x200000
        jne public_638cefb
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        je public_638cefb
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_638cefb
        public_638cec5 : nop
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, dword ptr ds : [public_658b8e4]
        je public_638cef2
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        call public_636e1b0
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [public_658b8e4]
        add esp, 8
        and eax, 0xFEFFFFFF
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x14], eax
        public_638cef2 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_638cec5
        public_638cefb : nop
        cmp ebx, ebp
        je public_638cf06
        mov ebx, dword ptr ds : [ebx+0x20]
        test ebx, ebx
        jne public_638cea8
        public_638cf06 : nop
        cmp dword ptr ds : [public_658b078], 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        jl public_638cf35
        mov edx, dword ptr ss : [esp]
        push edx
        call public_636ec10
        add esp, 4
        push eax
        mov eax, dword ptr ds : [public_658b7fc]
/*FIXUP push offset public_63fa0a0 @0x638cf26*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fa0a0
        push eax
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        public_638cf35 : nop
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x638ce70)
    }
}

#undef public_638cea8
#undef public_638cec5
#undef public_638cef2
#undef public_638cefb
#undef public_638cf06
#undef public_638cf35
