#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7368);

#define public_42d797 _public_42d797
#define public_42d7be _public_42d7be
#define public_42d7f4 _public_42d7f4
#define public_42d873 _public_42d873
#define public_42d8ab _public_42d8ab

PROC_DECLARE(0x42d770, internal_42d770, public_42d770);
extern "C" NAKED register_t __cdecl internal_42d770()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x10
        fld dword ptr ds : [public_610a0c]
        push esi
        fdivr qword ptr ds : [public_5c89b8]
        mov esi, dword ptr ds : [public_5c60e0]
        push edi
        mov edi, dword ptr ds : [public_5c6ed8]
        fstp qword ptr ss : [esp+0x10]
        public_42d797 : nop
        mov ecx, offset public_667cf8
        call esi
        mov ecx, offset public_667cf8
        call dword ptr ds : [public_5c60dc]
        fst qword ptr ss : [esp+8]
        fcomp qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        je public_42d7be
        push 1
        call edi
        jmp public_42d797
        public_42d7be : nop
        mov ecx, offset public_667cf8
        call dword ptr ds : [public_5c60d8]
        fld qword ptr ss : [esp+8]
        fst qword ptr ds : [public_667d48]
        fld dword ptr ds : [public_610a08]
        fdivr qword ptr ds : [public_5c89b8]
        fstp qword ptr ss : [esp+8]
        fcom qword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jnp public_42d7f4
        fstp st(0)
        fld qword ptr ss : [esp+8]
        public_42d7f4 : nop
        mov ecx, dword ptr ds : [public_667d50]
        fst qword ptr ds : [public_667d40]
        fld qword ptr ds : [public_667d38]
        mov eax, dword ptr ds : [public_667d6c]
        fadd st, st(1)
        inc ecx
        inc eax
        mov dword ptr ds : [public_667d6c], eax
        fstp qword ptr ds : [public_667d38]
        mov dword ptr ds : [public_667d50], ecx
        fld qword ptr ds : [public_610a00]
        fadd st, st(1)
        fstp qword ptr ds : [public_610a00]
        fstp st(0)
        fld qword ptr ds : [public_610a00]
        fcomp qword ptr ds : [public_5ca228]
        fnstsw ax
        test ah, 0x41
        jne public_42d873
        fild dword ptr ds : [public_667d6c]
        mov dword ptr ds : [public_667d6c], 0
        fdivr qword ptr ds : [public_610a00]
        mov dword ptr ds : [public_610a00], 0
        mov dword ptr ds : [public_610a04], 0
        fstp qword ptr ds : [public_667d60]
        public_42d873 : nop
        call dword ptr ds : [public_5c72ec]
        mov dword ptr ds : [public_667d20], eax
        mov byte ptr ds : [public_667d58], 0
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_42d8ab
        call public_5b7368
        mov ecx, dword ptr ds : [public_667d20]
        sub ecx, eax
        cmp ecx, 0x3E8
        jbe public_42d8ab
        mov byte ptr ds : [public_667d58], 1
        public_42d8ab : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x42d770)
    }
}

#undef public_42d797
#undef public_42d7be
#undef public_42d7f4
#undef public_42d873
#undef public_42d8ab
