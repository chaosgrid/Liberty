#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7260);

#define public_6cf7290 _public_6cf7290
#define public_6cf7292 _public_6cf7292
#define public_6cf72e4 _public_6cf72e4
#define public_6cf72e6 _public_6cf72e6
#define public_6cf7316 _public_6cf7316
#define public_6cf7318 _public_6cf7318
#define public_6cf7339 _public_6cf7339
#define public_6cf7340 _public_6cf7340
#define public_6cf7354 _public_6cf7354
#define public_6cf7361 _public_6cf7361

PROC_DECLARE(0x6cf7260, internal_6cf7260, public_6cf7260);
extern "C" NAKED register_t __cdecl internal_6cf7260()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        push edi
        mov edi, ecx
        je public_6cf7339
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf7339
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6cf7290
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cf7292
        public_6cf7290 : nop
        xor eax, eax
        public_6cf7292 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        cmp edx, dword ptr ds : [edi+0x38]
        je public_6cf7339
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi+0x3C]
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+0x40]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+0x44]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        je public_6cf72e4
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 3
        cmp cl, 3
        jne public_6cf72e4
        mov eax, esi
        jmp public_6cf72e6
        public_6cf72e4 : nop
        xor eax, eax
        public_6cf72e6 : nop
        mov ecx, dword ptr ds : [eax+0xB4]
        test ecx, ecx
        je public_6cf7354
        mov edx, dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov eax, dword ptr ds : [edx+ecx-0x14]
        test eax, eax
        je public_6cf7340
        test esi, esi
        je public_6cf7316
        mov edx, dword ptr ds : [esi+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf7318
        public_6cf7316 : nop
        xor esi, esi
        public_6cf7318 : nop
        mov edx, dword ptr ds : [esi+0xB4]
        imul edx, 0x418
        cmp eax, dword ptr ds : [edx+ecx-0x14]
        jne public_6cf7340
        fcom dword ptr ds : [public_6d66af4]
        fnstsw ax
        test ah, 0x41
        jp public_6cf7340
        fstp st(0)
        public_6cf7339 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6cf7340 : nop
        fcomp dword ptr ds : [public_6d66af0]
        fnstsw ax
        test ah, 0x41
        jp public_6cf7361
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_6cf7354 : nop
        fcomp dword ptr ds : [public_6d66aec]
        fnstsw ax
        test ah, 0x41
        jnp public_6cf7339
        public_6cf7361 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf7260)
    }
}

#undef public_6cf7290
#undef public_6cf7292
#undef public_6cf72e4
#undef public_6cf72e6
#undef public_6cf7316
#undef public_6cf7318
#undef public_6cf7339
#undef public_6cf7340
#undef public_6cf7354
#undef public_6cf7361
