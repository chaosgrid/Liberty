#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4c39);

#define public_59a80a _public_59a80a
#define public_59a851 _public_59a851
#define public_59a853 _public_59a853
#define public_59a861 _public_59a861
#define public_59a898 _public_59a898
#define public_59a8a1 _public_59a8a1
#define public_59a8ba _public_59a8ba
#define public_59a8bc _public_59a8bc
#define public_59a8d0 _public_59a8d0

PROC_DECLARE(0x59a760, internal_59a760, public_59a760);
extern "C" NAKED register_t __cdecl internal_59a760()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4c39 @0x59a768*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4c39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        xor ebx, ebx
        xor al, al
        cmp esi, ebx
        mov ebp, ecx
        je public_59a8bc
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp+0xAC], eax
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ss : [esp+0x30]
        mov dword ptr ss : [ebp+0xB0], ecx
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        or ecx, 0xFFFFFFFF
        mov byte ptr ss : [esp+0x10], al
        xor eax, eax
        mov dword ptr ss : [ebp+0xB4], edx
        mov edi, offset public_5c865c
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5c865c @0x59a7c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c7088]
        mov esi, dword ptr ds : [esi+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        sub edx, dword ptr ss : [esp+0x18]
        cmp edx, edi
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x34], esi
        ja public_59a80a
        call dword ptr ds : [public_5c7070]
        public_59a80a : nop
        cmp edi, ebx
        jbe public_59a853
        mov eax, dword ptr ss : [esp+0x18]
        lea ebx, ds:[eax+edi]
        push 0
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_59a851
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x34]
        mov ecx, edi
        lea edi, ds:[eax+edx]
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_59a851 : nop
        xor ebx, ebx
        public_59a853 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        pop edi
        jne public_59a861
        mov eax, dword ptr ds : [public_5c7078]
        public_59a861 : nop
        push ebx
        push ebx
        push eax
        lea ecx, ss:[ebp+0x7C]
        call public_59ec80
        test al, al
        je public_59a898
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push ebp
        call public_59dd00
        push ebp
        call public_59dbf0
        mov dl, byte ptr ss : [ebp+0x6C]
        and dl, 0xFB
        add esp, 0xC
        or dl, 3
        mov byte ptr ss : [ebp+0x6C], dl
        mov dl, 1
        mov byte ptr ss : [esp+0x30], dl
        jmp public_59a8a1
        public_59a898 : nop
        mov byte ptr ss : [esp+0x30], 0
        mov dl, byte ptr ss : [esp+0x30]
        public_59a8a1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        je public_59a8ba
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_59a8d0
        cmp cl, 0xFF
        je public_59a8d0
        dec cl
        mov byte ptr ds : [eax], cl
        public_59a8ba : nop
        mov al, dl
        public_59a8bc : nop
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        public_59a8d0 : nop
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x20]
        mov al, byte ptr ss : [esp+0x34]
        add esp, 4
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x59a760)
    }
}

#undef public_59a80a
#undef public_59a851
#undef public_59a853
#undef public_59a861
#undef public_59a898
#undef public_59a8a1
#undef public_59a8ba
#undef public_59a8bc
#undef public_59a8d0
