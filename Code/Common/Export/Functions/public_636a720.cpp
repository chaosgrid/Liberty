#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636a720);

#define public_636a758 _public_636a758
#define public_636a7e5 _public_636a7e5
#define public_636a7f8 _public_636a7f8
#define public_636a80d _public_636a80d
#define public_636a822 _public_636a822
#define public_636a837 _public_636a837
#define public_636a846 _public_636a846
#define public_636a848 _public_636a848
#define public_636a857 _public_636a857

PROC_DECLARE(0x636a720, internal_636a720, public_636a720);
extern "C" NAKED register_t __cdecl internal_636a720()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x18
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, 0x49742400
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        mov eax, 0xC9742400
        push edi
        xor edi, edi
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        cmp word ptr ss : [ebp+2], di
        jbe public_636a857
        public_636a758 : nop
        mov eax, dword ptr ss : [ebp+4]
        fld dword ptr ds : [public_63ee784]
        mov eax, dword ptr ds : [eax+edi*4]
        fmul dword ptr ds : [eax+0x14]
        xor edx, edx
        mov dl, byte ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x2C], edx
        fild dword ptr ss : [esp+0x2C]
        xor edx, edx
        mov dl, byte ptr ds : [eax+0x19]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x30], edx
        xor edx, edx
        mov dl, byte ptr ds : [eax+0x1A]
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ss : [esp+0x30]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x28], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fimul dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax+0xC]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_636a7e5
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        public_636a7e5 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_636a7f8
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        public_636a7f8 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 1
        je public_636a80d
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], eax
        public_636a80d : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_636a822
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], edx
        public_636a822 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 1
        je public_636a837
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], eax
        public_636a837 : nop
        fcom dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_636a846
        fstp dword ptr ds : [esi+8]
        jmp public_636a848
        public_636a846 : nop
        fstp st(0)
        public_636a848 : nop
        xor edx, edx
        mov dx, word ptr ss : [ebp+2]
        inc edi
        cmp edi, edx
        jl public_636a758
        public_636a857 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x636a720)
    }
}

#undef public_636a758
#undef public_636a7e5
#undef public_636a7f8
#undef public_636a80d
#undef public_636a822
#undef public_636a837
#undef public_636a846
#undef public_636a848
#undef public_636a857
