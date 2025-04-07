#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e100);
CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636e8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_638cd80);

#define public_638cda9 _public_638cda9
#define public_638cdcf _public_638cdcf
#define public_638cddb _public_638cddb
#define public_638ce04 _public_638ce04
#define public_638ce1b _public_638ce1b
#define public_638ce55 _public_638ce55
#define public_638ce5e _public_638ce5e
#define public_638ce6c _public_638ce6c

PROC_DECLARE(0x638cd80, internal_638cd80, public_638cd80);
extern "C" NAKED register_t __cdecl internal_638cd80()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x50]
        test eax, 0x40000000
        jne public_638ce6c
        test eax, 0x20000000
        mov ebx, dword ptr ss : [esp+0x18]
        je public_638cda9
        cmp ebx, 6
        je public_638ce6c
        public_638cda9 : nop
        mov eax, dword ptr ds : [public_658b980]
        mov ecx, dword ptr ds : [eax+0x60]
        mov edx, dword ptr ds : [public_658b978]
        mov esi, dword ptr ds : [edx+ecx*4]
        test esi, esi
        lea eax, ds:[edx+ecx*4]
        je public_638cdcf
        inc dword ptr ds : [public_658b99c]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        jmp public_638cddb
        public_638cdcf : nop
        push 0x18
        call public_6377e60
        add esp, 4
        mov esi, eax
        public_638cddb : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], ebx
        je public_638ce04
        mov ecx, dword ptr ds : [public_658b014]
        test ecx, ecx
        je public_638ce04
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        public_638ce04 : nop
        cmp ebx, 6
        jge public_638ce1b
        push esi
/*FIXUP push offset public_658b8f0 @0x638ce0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f0
        call public_636e1b0
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 
        public_638ce1b : nop
        mov ebx, dword ptr ds : [edi+0x50]
        jne public_638ce55
        or ebx, 0x20000000
        mov dword ptr ds : [edi+0x50], ebx
        mov eax, dword ptr ds : [public_658b8f4]
        push eax
        call public_636e8f0
        add esp, 4
        test eax, eax
        je public_638ce5e
        cmp dword ptr ds : [eax+0x10], 6
        je public_638ce5e
        push esi
        push 0
/*FIXUP push offset public_658b8f4 @0x638ce44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f4
        call public_636e100
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_638ce55 : nop
        or ebx, 0x40000000
        mov dword ptr ds : [edi+0x50], ebx
        public_638ce5e : nop
        push esi
/*FIXUP push offset public_658b8f4 @0x638ce5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b8f4
        call public_636e1b0
        add esp, 8
        public_638ce6c : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x638cd80)
    }
}

#undef public_638cda9
#undef public_638cdcf
#undef public_638cddb
#undef public_638ce04
#undef public_638ce1b
#undef public_638ce55
#undef public_638ce5e
#undef public_638ce6c
