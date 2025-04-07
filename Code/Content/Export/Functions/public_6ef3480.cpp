#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3480);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac111);

#define public_6ef34e4 _public_6ef34e4
#define public_6ef34ec _public_6ef34ec
#define public_6ef3507 _public_6ef3507
#define public_6ef3516 _public_6ef3516
#define public_6ef3520 _public_6ef3520
#define public_6ef352d _public_6ef352d

PROC_DECLARE(0x6ef3480, internal_6ef3480, public_6ef3480);
extern "C" NAKED register_t __cdecl internal_6ef3480()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac111 @0x6ef3482*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac111
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], ebp
        xor edx, edx
        cmp ebp, edx
        mov dword ptr ss : [esp+0x10], edx
        je public_6ef352d
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov ecx, 0xD
        mov esi, ebx
        mov edi, ebp
        rep movsd
        mov al, byte ptr ds : [ebx+0x34]
        mov byte ptr ss : [ebp+0x34], al
        mov eax, dword ptr ds : [ebx+0x38]
        cmp eax, edx
        je public_6ef34e4
        mov ecx, dword ptr ds : [ebx+0x3C]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6ef34e4 : nop
        test edx, edx
        mov eax, edx
        jge public_6ef34ec
        xor eax, eax
        public_6ef34ec : nop
        imul eax, 0x7C
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+0x38], eax
        mov ebp, dword ptr ds : [ebx+0x3C]
        mov edx, eax
        mov eax, dword ptr ds : [ebx+0x38]
        add esp, 4
        cmp eax, ebp
        je public_6ef3520
        public_6ef3507 : nop
        test edx, edx
        je public_6ef3516
        mov ecx, 0x1F
        mov esi, eax
        mov edi, edx
        rep movsd
        public_6ef3516 : nop
        add eax, 0x7C
        add edx, 0x7C
        cmp eax, ebp
        jne public_6ef3507
        public_6ef3520 : nop
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [eax+0x3C], edx
        mov dword ptr ds : [eax+0x40], edx
        pop ebx
        public_6ef352d : nop
        mov ecx, dword ptr ss : [esp+8]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef3480)
    }
}

#undef public_6ef34e4
#undef public_6ef34ec
#undef public_6ef3507
#undef public_6ef3516
#undef public_6ef3520
#undef public_6ef352d
