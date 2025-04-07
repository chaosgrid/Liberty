#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f242e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec13d7 _public_6ec13d7
#define public_6ec141d _public_6ec141d
#define public_6ec1429 _public_6ec1429
#define public_6ec144a _public_6ec144a
#define public_6ec1454 _public_6ec1454
#define public_6ec148f _public_6ec148f
#define public_6ec1491 _public_6ec1491
#define public_6ec14b2 _public_6ec14b2
#define public_6ec14b4 _public_6ec14b4
#define public_6ec14b8 _public_6ec14b8
#define public_6ec14c2 _public_6ec14c2

PROC_DECLARE(0x6ec1330, internal_6ec1330, public_6ec1330);
extern "C" NAKED register_t __cdecl internal_6ec1330()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push edi
        push eax
        xor bl, bl
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec14c2
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec14c2
        call public_6f478c0
        test eax, eax
        je public_6ec14c2
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0xC]
        push edx
        lea edi, ds:[esi+0x74]
        call public_6f15940
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi], eax
        lea eax, ds:[esi+0x40]
        push eax
        call public_6f15940
        test dword ptr ds : [edi], 0x3FFFFFFF
        lea ebp, ds:[esi+0x78]
        mov dword ptr ss : [ebp], eax
        je public_6ec14c2
        test eax, 0x3FFFFFFF
        je public_6ec14c2
        push ebp
        push edi
        call public_6f242e0
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        test eax, eax
        je public_6ec13d7
        mov ecx, dword ptr ds : [edi]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec13d7
        mov edx, dword ptr ss : [ebp]
        cmp edx, dword ptr ds : [eax+4]
        jne public_6ec13d7
        mov cl, byte ptr ds : [eax+0xC]
        test cl, cl
        sete al
        mov byte ptr ds : [esi+0x7C], al
        public_6ec13d7 : nop
        mov cl, byte ptr ds : [esi+0x7C]
        test cl, cl
        je public_6ec14b8
        fld dword ptr ds : [esi+0x80]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6ec14b4
        mov edx, dword ptr ds : [esi+4]
        fld dword ptr ds : [edx+0x30C]
        fld dword ptr ds : [esi+0x94]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6ec141d
        mov dword ptr ss : [esp+0x1C], 0
        jmp public_6ec1429
        public_6ec141d : nop
        fld st(0)
        fsub dword ptr ds : [esi+0x94]
        fstp dword ptr ss : [esp+0x1C]
        public_6ec1429 : nop
        fstp dword ptr ds : [esi+0x94]
        fld dword ptr ds : [esi+0x88]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6ec144a
        fld dword ptr ds : [public_6fb444c]
        jmp public_6ec1454
        public_6ec144a : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [esi+0x88]
        public_6ec1454 : nop
        fld dword ptr ds : [esi+0x84]
        mov eax, dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x88], eax
        fnstsw ax
        test ah, 0x41
        jnp public_6ec148f
        fld dword ptr ds : [esi+0x84]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6ec14b2
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6ec14b4
        jmp public_6ec1491
        public_6ec148f : nop
        fstp st(0)
        public_6ec1491 : nop
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [esi+0x90]
        fst dword ptr ds : [esi+0x90]
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 1
        jne public_6ec14b4
        mov bl, 1
        jmp public_6ec14b4
        public_6ec14b2 : nop
        fstp st(0)
        public_6ec14b4 : nop
        test cl, cl
        jne public_6ec14c2
        public_6ec14b8 : nop
        mov dword ptr ds : [esi+0x90], 0
        public_6ec14c2 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec1330)
    }
}

#undef public_6ec13d7
#undef public_6ec141d
#undef public_6ec1429
#undef public_6ec144a
#undef public_6ec1454
#undef public_6ec148f
#undef public_6ec1491
#undef public_6ec14b2
#undef public_6ec14b4
#undef public_6ec14b8
#undef public_6ec14c2
