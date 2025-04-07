#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d440);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6396c3d);

#define public_631d4b7 _public_631d4b7
#define public_631d4bf _public_631d4bf
#define public_631d4c5 _public_631d4c5
#define public_631d4e8 _public_631d4e8
#define public_631d500 _public_631d500
#define public_631d513 _public_631d513

PROC_DECLARE(0x631d440, internal_631d440, public_631d440);
extern "C" NAKED register_t __cdecl internal_631d440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396c3d @0x631d442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396c3d
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        xor edi, edi
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [ebp+4], edx
        mov dl, byte ptr ds : [esi+4]
        add ebp, 4
        lea eax, ds:[esi+4]
        lea ecx, ss:[ebp+4]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], edi
        mov dword ptr ds : [ecx+8], edi
        mov dword ptr ds : [ecx+0xC], edi
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push edi
        push eax
        mov dword ptr ss : [esp+0x1C], ebp
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x14]
        mov byte ptr ss : [ebp+0x14], al
        mov ecx, dword ptr ds : [esi+0x18]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x1C], edi
        jne public_631d4b7
        xor eax, eax
        jmp public_631d4bf
        public_631d4b7 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        sub eax, ecx
        sar eax, 2
        public_631d4bf : nop
        cmp eax, edi
        jge public_631d4c5
        xor eax, eax
        public_631d4c5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ss : [ebp+0x18], eax
        mov ebx, dword ptr ds : [esi+0x1C]
        mov esi, dword ptr ds : [esi+0x18]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        mov dword ptr ss : [esp+0x28], edi
        je public_631d513
        public_631d4e8 : nop
        mov dword ptr ss : [esp+0x2C], edi
        test edi, edi
        mov byte ptr ss : [esp+0x1C], 1
        je public_631d500
        mov ecx, edi
        call public_6333e30
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        public_631d500 : nop
        add edi, 4
        add esi, 4
        cmp esi, ebx
        mov byte ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x28], edi
        jne public_631d4e8
        public_631d513 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+0x1C], edi
        mov dword ptr ss : [ebp+0x20], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x631d440)
    }
}

#undef public_631d4b7
#undef public_631d4bf
#undef public_631d4c5
#undef public_631d4e8
#undef public_631d500
#undef public_631d513
