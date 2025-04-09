#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4b6290);
CLANG_FORWARD_PROC_SYMBOL(public_4be2b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd80);
CLANG_FORWARD_PROC_SYMBOL(public_59de50);
CLANG_FORWARD_PROC_SYMBOL(public_59e080);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59e0a3 _public_59e0a3
#define public_59e0c9 _public_59e0c9
#define public_59e0cb _public_59e0cb
#define public_59e10e _public_59e10e
#define public_59e123 _public_59e123
#define public_59e13b _public_59e13b
#define public_59e15d _public_59e15d
#define public_59e175 _public_59e175
#define public_59e18f _public_59e18f
#define public_59e196 _public_59e196
#define public_59e1a4 _public_59e1a4
#define public_59e1cc _public_59e1cc
#define public_59e1dc _public_59e1dc
#define public_59e1e1 _public_59e1e1
#define public_59e1f0 _public_59e1f0
#define public_59e215 _public_59e215
#define public_59e21b _public_59e21b
#define public_59e223 _public_59e223
#define public_59e229 _public_59e229
#define public_59e231 _public_59e231
#define public_59e238 _public_59e238
#define public_59e245 _public_59e245
#define public_59e25c _public_59e25c
#define public_59e261 _public_59e261
#define public_59e272 _public_59e272
#define public_59e280 _public_59e280
#define public_59e2a5 _public_59e2a5
#define public_59e2ab _public_59e2ab
#define public_59e2b3 _public_59e2b3
#define public_59e2b9 _public_59e2b9
#define public_59e2c1 _public_59e2c1
#define public_59e2c8 _public_59e2c8
#define public_59e2d1 _public_59e2d1
#define public_59e2e3 _public_59e2e3

PROC_DECLARE(0x59e080, internal_59e080, public_59e080);
extern "C" NAKED register_t __cdecl internal_59e080()
{
    __asm
    {
        fld dword ptr ds : [public_67dce8]
        fadd qword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5e5dc4]
        fst dword ptr ds : [public_67dce8]
        fnstsw ax
        test ah, 0x41
        jne public_59e0c9
        mov cl, byte ptr ds : [public_67dce4]
        public_59e0a3 : nop
        fsub dword ptr ds : [public_5e5dc4]
        test cl, cl
        sete cl
        fcom dword ptr ds : [public_5e5dc4]
        fnstsw ax
        test ah, 0x41
        je public_59e0a3
        fstp dword ptr ds : [public_67dce8]
        mov byte ptr ds : [public_67dce4], cl
        jmp public_59e0cb
        public_59e0c9 : nop
        fstp st(0)
        public_59e0cb : nop
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push edi
        call public_4be2b0
        push esi
        push edi
        call public_4b6290
        add esp, 0x10
        xor edi, edi
        xor esi, esi
        call public_41dd90
        test al, al
        je public_59e123
        mov eax, dword ptr ds : [public_67dce0]
        cmp eax, edi
/*FIXUP push offset public_67dbcc @0x59e0fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        jne public_59e10e
        call public_59dd80
        add esp, 4
        mov esi, eax
        jmp public_59e123
        public_59e10e : nop
        push eax
        call public_59de50
        mov esi, eax
        add esp, 8
        cmp esi, edi
        jne public_59e123
        mov esi, dword ptr ds : [public_67dce0]
        public_59e123 : nop
        mov ecx, dword ptr ds : [public_67dcd8]
        cmp ecx, esi
        je public_59e15d
        cmp ecx, edi
        je public_59e13b
        mov eax, dword ptr ds : [ecx]
/*FIXUP push offset public_67dbcc @0x59e133*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        call dword ptr ds : [eax+0x40]
        public_59e13b : nop
        cmp esi, edi
        mov dword ptr ds : [public_67dcd8], esi
        je public_59e15d
        mov edx, dword ptr ds : [esi]
/*FIXUP push offset public_67dbcc @0x59e147*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        mov ecx, esi
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi]
/*FIXUP push offset public_67dbcc @0x59e153*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbcc
        mov ecx, esi
        call dword ptr ds : [eax+0x38]
        public_59e15d : nop
        cmp dword ptr ds : [public_67dccc], edi
        mov dword ptr ds : [public_67dcd0], edi
        je public_59e196
        mov esi, dword ptr ds : [public_67dbe8]
        cmp esi, edi
        je public_59e196
        public_59e175 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_59e18f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, edi
        je public_59e18f
        mov cl, byte ptr ds : [eax+0x2D0]
        test cl, cl
        jne public_59e1cc
        public_59e18f : nop
        mov esi, dword ptr ds : [esi+4]
        cmp esi, edi
        jne public_59e175
        public_59e196 : nop
        mov esi, dword ptr ds : [public_67dbe8]
        cmp esi, edi
        je public_59e272
        public_59e1a4 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_59e261
        cmp dword ptr ds : [ecx+4], edi
        jne public_59e261
        test byte ptr ds : [ecx+0x6C], 1
        je public_59e25c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_59e261
        public_59e1cc : nop
        mov ecx, dword ptr ds : [esi+8]
        test byte ptr ds : [ecx+0x6C], 1
        je public_59e1dc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        jmp public_59e1e1
        public_59e1dc : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_59e1e1 : nop
        mov ebp, dword ptr ds : [public_67dbdc]
        cmp ebp, edi
        je public_59e238
        nop 
        lea esp, ss:[esp]
        public_59e1f0 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        je public_59e231
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [eax+8], 0
        call public_5b7e1d
        add esp, 4
        test esi, esi
        je public_59e215
        mov dword ptr ds : [esi+4], edi
        jmp public_59e21b
        public_59e215 : nop
        mov dword ptr ds : [public_67dbe8], edi
        public_59e21b : nop
        test edi, edi
        je public_59e223
        mov dword ptr ds : [edi], esi
        jmp public_59e229
        public_59e223 : nop
        mov dword ptr ds : [public_67dbec], esi
        public_59e229 : nop
        dec dword ptr ds : [public_67dbe4]
        xor edi, edi
        public_59e231 : nop
        mov ebp, dword ptr ss : [ebp+4]
        cmp ebp, edi
        jne public_59e1f0
        public_59e238 : nop
        mov eax, dword ptr ds : [public_67dbdc]
        cmp eax, edi
        je public_59e2e3
        public_59e245 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_59e245
        jmp public_59e2e3
        public_59e25c : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        public_59e261 : nop
        inc dword ptr ds : [public_67dcd0]
        mov esi, dword ptr ds : [esi+4]
        cmp esi, edi
        jne public_59e1a4
        public_59e272 : nop
        mov ebp, dword ptr ds : [public_67dbdc]
        cmp ebp, edi
        je public_59e2c8
        lea esp, ss:[esp]
        public_59e280 : nop
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, edi
        je public_59e2c1
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [eax+8], 0
        call public_5b7e1d
        add esp, 4
        test esi, esi
        je public_59e2a5
        mov dword ptr ds : [esi+4], edi
        jmp public_59e2ab
        public_59e2a5 : nop
        mov dword ptr ds : [public_67dbe8], edi
        public_59e2ab : nop
        test edi, edi
        je public_59e2b3
        mov dword ptr ds : [edi], esi
        jmp public_59e2b9
        public_59e2b3 : nop
        mov dword ptr ds : [public_67dbec], esi
        public_59e2b9 : nop
        dec dword ptr ds : [public_67dbe4]
        xor edi, edi
        public_59e2c1 : nop
        mov ebp, dword ptr ss : [ebp+4]
        cmp ebp, edi
        jne public_59e280
        public_59e2c8 : nop
        mov eax, dword ptr ds : [public_67dbdc]
        cmp eax, edi
        je public_59e2e3
        public_59e2d1 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_59e2d1
        public_59e2e3 : nop
        mov dword ptr ds : [public_67dbd8], edi
        mov dword ptr ds : [public_67dbe0], edi
        mov dword ptr ds : [public_67dbdc], edi
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x59e080)
    }
}

#undef public_59e0a3
#undef public_59e0c9
#undef public_59e0cb
#undef public_59e10e
#undef public_59e123
#undef public_59e13b
#undef public_59e15d
#undef public_59e175
#undef public_59e18f
#undef public_59e196
#undef public_59e1a4
#undef public_59e1cc
#undef public_59e1dc
#undef public_59e1e1
#undef public_59e1f0
#undef public_59e215
#undef public_59e21b
#undef public_59e223
#undef public_59e229
#undef public_59e231
#undef public_59e238
#undef public_59e245
#undef public_59e25c
#undef public_59e261
#undef public_59e272
#undef public_59e280
#undef public_59e2a5
#undef public_59e2ab
#undef public_59e2b3
#undef public_59e2b9
#undef public_59e2c1
#undef public_59e2c8
#undef public_59e2d1
#undef public_59e2e3
