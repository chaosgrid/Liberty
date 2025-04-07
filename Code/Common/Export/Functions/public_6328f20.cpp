#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307460);
CLANG_FORWARD_PROC_SYMBOL(public_6328f20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63971de);

#define public_6328f82 _public_6328f82
#define public_6328f9e _public_6328f9e
#define public_6328fa4 _public_6328fa4
#define public_6328ffe _public_6328ffe
#define public_6329020 _public_6329020
#define public_6329035 _public_6329035
#define public_6329041 _public_6329041
#define public_632904b _public_632904b
#define public_632904f _public_632904f
#define public_63290b0 _public_63290b0
#define public_63290df _public_63290df
#define public_63290e1 _public_63290e1
#define public_6329106 _public_6329106

PROC_DECLARE(0x6328f20, internal_6328f20, public_6328f20);
extern "C" NAKED register_t __cdecl internal_6328f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63971de @0x6328f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63971de
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        xor ebx, ebx
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push ebp
        mov dword ptr ss : [esp+0x28], ebx
        call dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jge public_6329106
        test byte ptr ss : [esp+0x44], 1
        jne public_6328fa4
        cmp eax, ebx
        mov esi, eax
        jle public_6328f9e
        lea ebp, ss:[ebp+eax*2-2]
        public_6328f82 : nop
        xor eax, eax
        mov ax, word ptr ss : [ebp]
        push eax
        call dword ptr ds : [public_6399264]
        add esp, 4
        test eax, eax
        jne public_6328f9e
        dec esi
        sub ebp, 2
        cmp esi, ebx
        jg public_6328f82
        public_6328f9e : nop
        mov eax, esi
        mov dword ptr ss : [esp+0x10], eax
        public_6328fa4 : nop
        cmp eax, ebx
        je public_6329106
        push 0x14
        call public_6391d9c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x3C], ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_632904b
        mov edi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [esp+0x34]
        lea esi, ss:[ebp+4]
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        cmp edi, ebx
        mov byte ptr ss : [esp+0x2C], 2
        mov dword ptr ss : [ebp], offset public_63a3fec
        jge public_6328ffe
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov edi, eax
        public_6328ffe : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        xor ebx, ebx
        test al, al
        je public_6329041
        cmp edi, ebx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x34]
        jbe public_6329035
        sub ecx, eax
        mov dword ptr ss : [esp+0x3C], edi
        public_6329020 : nop
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [ecx+eax], dx
        mov edx, dword ptr ss : [esp+0x3C]
        add eax, 2
        dec edx
        mov dword ptr ss : [esp+0x3C], edx
        jne public_6329020
        public_6329035 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        lea edi, ds:[eax+edi*2]
        mov word ptr ds : [edi], bx
        public_6329041 : nop
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x3C], ebp
        jmp public_632904f
        public_632904b : nop
        mov dword ptr ss : [esp+0x3C], ebx
        public_632904f : nop
        push 0x14
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        call public_6391d9c
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], ebp
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x2C], 3
        je public_63290df
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x34]
        sub edi, eax
        lea eax, ds:[ecx+eax*2]
        mov dword ptr ss : [esp+0x34], eax
        mov dl, byte ptr ss : [esp+0x34]
        lea esi, ss:[ebp+4]
        mov byte ptr ds : [esi], dl
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov byte ptr ss : [esp+0x2C], 5
        mov dword ptr ss : [ebp], offset public_63a3fec
        jns public_63290b0
        push eax
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov edi, eax
        public_63290b0 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_63290e1
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [esi+4]
        push edi
        push eax
        push ecx
        call public_6307460
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [edx+edi*2], 0
        jmp public_63290e1
        public_63290df : nop
        xor ebp, ebp
        public_63290e1 : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x4C]
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        mov dword ptr ds : [edx], ebp
        pop ebp
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        public_6329106 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        pop edi
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [ecx], ebx
        mov ecx, dword ptr ss : [esp+0x20]
        pop esi
        pop ebp
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6328f20)
    }
}

#undef public_6328f82
#undef public_6328f9e
#undef public_6328fa4
#undef public_6328ffe
#undef public_6329020
#undef public_6329035
#undef public_6329041
#undef public_632904b
#undef public_632904f
#undef public_63290b0
#undef public_63290df
#undef public_63290e1
#undef public_6329106
