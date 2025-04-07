#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4450);
CLANG_FORWARD_PROC_SYMBOL(public_62d4520);
CLANG_FORWARD_PROC_SYMBOL(public_62d46f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62d4466 _public_62d4466
#define public_62d44ac _public_62d44ac
#define public_62d44bd _public_62d44bd
#define public_62d44c9 _public_62d44c9
#define public_62d44cb _public_62d44cb
#define public_62d44d9 _public_62d44d9
#define public_62d4509 _public_62d4509
#define public_62d450b _public_62d450b
#define public_62d4519 _public_62d4519

PROC_DECLARE(0x62d4450, internal_62d4450, public_62d4450);
extern "C" NAKED register_t __cdecl internal_62d4450()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x15C]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_62d4519
        push ebp
        push edi
        public_62d4466 : nop
        fld dword ptr ds : [esi+0x20]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x20]
        fld dword ptr ds : [esi+0x20]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62d4509
        mov eax, dword ptr ds : [esi+8]
        sub eax, 0
        lea ebp, ds:[esi+8]
        je public_62d44bd
        dec eax
        jne public_62d44d9
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_62d44ac
        mov ecx, dword ptr ds : [esi+0x1C]
        push 0
        push ecx
        add eax, 0xFFFFFFF8
        push eax
        mov ecx, ebx
        call public_62d4750
        jmp public_62d44d9
        public_62d44ac : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        xor eax, eax
        push eax
        push ecx
        push eax
        mov ecx, ebx
        call public_62d4750
        jmp public_62d44d9
        public_62d44bd : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_62d44c9
        add eax, 0xFFFFFFF8
        jmp public_62d44cb
        public_62d44c9 : nop
        xor eax, eax
        public_62d44cb : nop
        mov edx, dword ptr ds : [esi+0x1C]
        push 0
        push edx
        push eax
        mov ecx, ebx
        call public_62d4520
        public_62d44d9 : nop
        mov edi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], edi
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov ecx, ebp
        call public_62d46f0
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+0x160]
        add esp, 4
        dec eax
        mov dword ptr ds : [ebx+0x160], eax
        mov esi, edi
        jmp public_62d450b
        public_62d4509 : nop
        mov esi, dword ptr ds : [esi]
        public_62d450b : nop
        cmp esi, dword ptr ds : [ebx+0x15C]
        jne public_62d4466
        pop edi
        pop ebp
        public_62d4519 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62d4450)
    }
}

#undef public_62d4466
#undef public_62d44ac
#undef public_62d44bd
#undef public_62d44c9
#undef public_62d44cb
#undef public_62d44d9
#undef public_62d4509
#undef public_62d450b
#undef public_62d4519
