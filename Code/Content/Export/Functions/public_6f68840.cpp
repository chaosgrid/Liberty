#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f68840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f68870 _public_6f68870
#define public_6f68882 _public_6f68882
#define public_6f688d7 _public_6f688d7
#define public_6f688f4 _public_6f688f4
#define public_6f688fd _public_6f688fd
#define public_6f6892e _public_6f6892e

PROC_DECLARE(0x6f68840, internal_6f68840, public_6f68840);
extern "C" NAKED register_t __cdecl internal_6f68840()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ds : [public_6fce76c]
        push ebx
        push ebp
        push esi
        mov ebx, eax
        inc eax
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [public_6fce76c], eax
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], edi
        je public_6f68882
        mov edx, dword ptr ds : [ecx+4]
        lea ebx, ds:[ebx]
        public_6f68870 : nop
        mov ebp, dword ptr ds : [eax+8]
        cmp dword ptr ss : [ebp+4], edx
        je public_6f6892e
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f68870
        public_6f68882 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x58]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push 0x38
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x4C], 3
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f688d7
        mov edi, eax
        public_6f688d7 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [edx], eax
        je public_6f688f4
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        rep movsd
        public_6f688f4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc dword ptr ds : [eax+8]
        mov edi, eax
        public_6f688fd : nop
        push 0x41F00000
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_6fd1c74 @0x6f68907*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd1c74
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], ebx
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        mov dword ptr ds : [edi+0x14], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x3C
        ret 0x10
        public_6f6892e : nop
        mov ecx, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+0x34], 3
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x20], ebp
        mov ecx, dword ptr ds : [edx]
        add eax, 0x28
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        jmp public_6f688fd
        UNREACHABLE_TRAP(0x6f68840)
    }
}

#undef public_6f68870
#undef public_6f68882
#undef public_6f688d7
#undef public_6f688f4
#undef public_6f688fd
#undef public_6f6892e
