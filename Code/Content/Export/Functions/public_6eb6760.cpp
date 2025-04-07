#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6760);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa2a9);

#define public_6eb67b1 _public_6eb67b1
#define public_6eb67b9 _public_6eb67b9
#define public_6eb67bf _public_6eb67bf
#define public_6eb67e0 _public_6eb67e0
#define public_6eb67e8 _public_6eb67e8
#define public_6eb67f2 _public_6eb67f2
#define public_6eb6827 _public_6eb6827
#define public_6eb683c _public_6eb683c
#define public_6eb6868 _public_6eb6868

PROC_DECLARE(0x6eb6760, internal_6eb6760, public_6eb6760);
extern "C" NAKED register_t __cdecl internal_6eb6760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faa2a9 @0x6eb6762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa2a9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], edi
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ebx
        je public_6eb6868
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        add edi, 4
        mov byte ptr ds : [edi], cl
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], edi
        jne public_6eb67b1
        xor eax, eax
        jmp public_6eb67b9
        public_6eb67b1 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6eb67b9 : nop
        cmp eax, ebx
        jge public_6eb67bf
        xor eax, eax
        public_6eb67bf : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+8]
        add esp, 4
        cmp ecx, edx
        je public_6eb67f2
        lea esp, ss:[esp]
        public_6eb67e0 : nop
        cmp eax, ebx
        je public_6eb67e8
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebp
        public_6eb67e8 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6eb67e0
        public_6eb67f2 : nop
        mov dword ptr ds : [edi+8], eax
        mov dword ptr ds : [edi+0xC], eax
        mov al, byte ptr ds : [esi+0x14]
        push 0x34
        mov byte ptr ss : [esp+0x24], 1
        mov byte ptr ds : [edi+0x10], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        mov esi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        je public_6eb6868
        public_6eb6827 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x34
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6eb683c
        mov ebp, eax
        public_6eb683c : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_6eb6880
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+0x18], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6eb6827
        public_6eb6868 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6eb6760)
    }
}

#undef public_6eb67b1
#undef public_6eb67b9
#undef public_6eb67bf
#undef public_6eb67e0
#undef public_6eb67e8
#undef public_6eb67f2
#undef public_6eb6827
#undef public_6eb683c
#undef public_6eb6868
