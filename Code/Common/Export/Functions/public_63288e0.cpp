#include "Common-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6397194);

#define public_632893c _public_632893c
#define public_632894a _public_632894a
#define public_6328971 _public_6328971
#define public_6328981 _public_6328981
#define public_632898d _public_632898d
#define public_6328997 _public_6328997
#define public_63289a0 _public_63289a0
#define public_63289b0 _public_63289b0
#define public_63289c1 _public_63289c1
#define public_63289cb _public_63289cb

PROC_DECLARE(0x63288e0, internal_63288e0, public_63288e0);
extern "C" NAKED register_t __cdecl internal_63288e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397194 @0x63288e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397194
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov al, byte ptr ss : [esp+0x24]
        xor ebx, ebx
        lea esi, ss:[ebp+4]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov edi, dword ptr ss : [esp+0x28]
        cmp edi, ebx
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [ebp], offset public_63a3fec
        jge public_632893c
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov edi, eax
        public_632893c : nop
        cmp edi, 0x7FFFFFFD
        jbe public_632894a
        call dword ptr ds : [public_63991b4]
        public_632894a : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6328971
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6328971
        cmp cl, 0xFF
        je public_6328971
        cmp edi, ebx
        jne public_6328997
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        jmp public_63289cb
        public_6328971 : nop
        cmp edi, ebx
        jne public_6328981
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        jmp public_63289cb
        public_6328981 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, 0x1F
        ja public_632898d
        cmp eax, edi
        jae public_63289a0
        public_632898d : nop
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        public_6328997 : nop
        mov ecx, esi
        push edi
        call dword ptr ds : [public_6399158]
        public_63289a0 : nop
        cmp edi, ebx
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+4]
        jbe public_63289c1
        mov edx, edi
        lea ecx, ds:[ecx]
        public_63289b0 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_63289b0
        xor ebx, ebx
        public_63289c1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], bx
        public_63289cb : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x63288e0)
    }
}

#undef public_632893c
#undef public_632894a
#undef public_6328971
#undef public_6328981
#undef public_632898d
#undef public_6328997
#undef public_63289a0
#undef public_63289b0
#undef public_63289c1
#undef public_63289cb
