#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626c72b _public_626c72b
#define public_626c733 _public_626c733
#define public_626c739 _public_626c739
#define public_626c756 _public_626c756
#define public_626c75e _public_626c75e
#define public_626c768 _public_626c768

PROC_DECLARE(0x626c700, internal_626c700, public_626c700);
extern "C" NAKED register_t __cdecl internal_626c700()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov cx, word ptr ds : [esi+4]
        mov word ptr ds : [edi+4], cx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], edx
        mov al, byte ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+0xC], al
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        jne public_626c72b
        xor eax, eax
        jmp public_626c733
        public_626c72b : nop
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, ecx
        sar eax, 2
        public_626c733 : nop
        test eax, eax
        jge public_626c739
        xor eax, eax
        public_626c739 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+0x10], eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov esi, dword ptr ds : [esi+0x10]
        add esp, 4
        cmp esi, ecx
        je public_626c768
        public_626c756 : nop
        test eax, eax
        je public_626c75e
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        public_626c75e : nop
        add esi, 4
        add eax, 4
        cmp esi, ecx
        jne public_626c756
        public_626c768 : nop
        mov dword ptr ds : [edi+0x14], eax
        mov dword ptr ds : [edi+0x18], eax
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626c700)
    }
}

#undef public_626c72b
#undef public_626c733
#undef public_626c739
#undef public_626c756
#undef public_626c75e
#undef public_626c768
