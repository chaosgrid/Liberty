#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af2e0);
CLANG_FORWARD_PROC_SYMBOL(public_63098a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_639431e);

#define public_62af397 _public_62af397
#define public_62af3a1 _public_62af3a1
#define public_62af3c0 _public_62af3c0
#define public_62af3d1 _public_62af3d1
#define public_62af3dd _public_62af3dd

PROC_DECLARE(0x62af2e0, internal_62af2e0, public_62af2e0);
extern "C" NAKED register_t __cdecl internal_62af2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639431e @0x62af2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639431e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_63098a0
        mov eax, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ss : [esp+0x20]
        xor edi, edi
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ss : [esp+0x18], edi
        mov byte ptr ds : [esi+0x64], cl
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov dl, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0x74], edi
        push 0xC
        mov byte ptr ss : [esp+0x1C], 1
        mov byte ptr ds : [esi+0x78], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], edi
        mov dword ptr ds : [esi+0x84], edi
        mov dword ptr ds : [esi+0x88], edi
        mov eax, dword ptr ds : [public_63fc438]
        inc eax
        lea ebx, ds:[esi+0x8C]
        inc eax
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [public_63fc438], eax
        mov eax, dword ptr ds : [public_63fc434]
        cmp eax, edi
        mov byte ptr ss : [esp+0x18], 4
        je public_62af397
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc434], ecx
        dec dword ptr ds : [public_63fc440]
        jmp public_62af3a1
        public_62af397 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62af3a1 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], edi
        dec dword ptr ds : [public_63fc438]
        jne public_62af3dd
        mov eax, dword ptr ds : [public_63fc434]
        cmp eax, edi
        je public_62af3d1
        lea ecx, ds:[ecx]
        public_62af3c0 : nop
        mov ebx, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp ebx, edi
        mov eax, ebx
        jne public_62af3c0
        public_62af3d1 : nop
        mov dword ptr ds : [public_63fc434], edi
        mov dword ptr ds : [public_63fc440], edi
        public_62af3dd : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x98], edi
        pop edi
        mov dword ptr ds : [esi], offset public_639b66c
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62af2e0)
    }
}

#undef public_62af397
#undef public_62af3a1
#undef public_62af3c0
#undef public_62af3d1
#undef public_62af3dd
