#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f20bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22610);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f20c19 _public_6f20c19
#define public_6f20c2d _public_6f20c2d
#define public_6f20c33 _public_6f20c33
#define public_6f20c41 _public_6f20c41
#define public_6f20c82 _public_6f20c82
#define public_6f20c9b _public_6f20c9b
#define public_6f20cae _public_6f20cae
#define public_6f20cb9 _public_6f20cb9
#define public_6f20cbc _public_6f20cbc
#define public_6f20cc1 _public_6f20cc1
#define public_6f20cea _public_6f20cea
#define public_6f20d03 _public_6f20d03
#define public_6f20d16 _public_6f20d16
#define public_6f20d20 _public_6f20d20
#define public_6f20d43 _public_6f20d43
#define public_6f20d5b _public_6f20d5b
#define public_6f20d6e _public_6f20d6e
#define public_6f20d7b _public_6f20d7b
#define public_6f20d7d _public_6f20d7d
#define public_6f20d83 _public_6f20d83
#define public_6f20dac _public_6f20dac
#define public_6f20dbf _public_6f20dbf
#define public_6f20dca _public_6f20dca
#define public_6f20dcd _public_6f20dcd
#define public_6f20dcf _public_6f20dcf
#define public_6f20dd2 _public_6f20dd2
#define public_6f20dde _public_6f20dde

PROC_DECLARE(0x6f20bb0, internal_6f20bb0, public_6f20bb0);
extern "C" NAKED register_t __cdecl internal_6f20bb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f22610
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f20c19
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f20c19
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f20c19
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f20c33
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f20c33
        public_6f20c19 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f20c2d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f20c33
        public_6f20c2d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f20c33
        mov dword ptr ds : [eax], ebx
        public_6f20c33 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f20dde
        public_6f20c41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_6f20dde
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f20d20
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f20c82
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f20dd2
        public_6f20c82 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f20cc1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f20c9b
        mov dword ptr ds : [edx+4], eax
        public_6f20c9b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f20cae
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f20cbc
        public_6f20cae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f20cb9
        mov dword ptr ds : [edx], ecx
        jmp public_6f20cbc
        public_6f20cb9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f20cbc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f20cc1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f20cea
        mov dword ptr ds : [edi+4], ecx
        public_6f20cea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f20d03
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f20dcf
        public_6f20d03 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f20d16
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f20dcf
        public_6f20d16 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f20dcf
        public_6f20d20 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6f20d43
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f20dd2
        public_6f20d43 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f20d83
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f20d5b
        mov dword ptr ds : [edx+4], eax
        public_6f20d5b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f20d6e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f20d7d
        public_6f20d6e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f20d7b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f20d7d
        public_6f20d7b : nop
        mov dword ptr ds : [edx], ecx
        public_6f20d7d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f20d83 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f20dac
        mov dword ptr ds : [edi+4], ecx
        public_6f20dac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f20dbf
        mov dword ptr ds : [edi+4], edx
        jmp public_6f20dcd
        public_6f20dbf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f20dca
        mov dword ptr ds : [edi], edx
        jmp public_6f20dcd
        public_6f20dca : nop
        mov dword ptr ds : [edi+8], edx
        public_6f20dcd : nop
        mov dword ptr ds : [edx], ecx
        public_6f20dcf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f20dd2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f20c41
        public_6f20dde : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f20bb0)
    }
}

#undef public_6f20c19
#undef public_6f20c2d
#undef public_6f20c33
#undef public_6f20c41
#undef public_6f20c82
#undef public_6f20c9b
#undef public_6f20cae
#undef public_6f20cb9
#undef public_6f20cbc
#undef public_6f20cc1
#undef public_6f20cea
#undef public_6f20d03
#undef public_6f20d16
#undef public_6f20d20
#undef public_6f20d43
#undef public_6f20d5b
#undef public_6f20d6e
#undef public_6f20d7b
#undef public_6f20d7d
#undef public_6f20d83
#undef public_6f20dac
#undef public_6f20dbf
#undef public_6f20dca
#undef public_6f20dcd
#undef public_6f20dcf
#undef public_6f20dd2
#undef public_6f20dde
