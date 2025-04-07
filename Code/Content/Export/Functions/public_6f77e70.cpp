#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f77e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f77ea7 _public_6f77ea7
#define public_6f77eba _public_6f77eba
#define public_6f77ef2 _public_6f77ef2
#define public_6f77f61 _public_6f77f61
#define public_6f77f7f _public_6f77f7f
#define public_6f77f81 _public_6f77f81
#define public_6f77f93 _public_6f77f93
#define public_6f78028 _public_6f78028
#define public_6f7804f _public_6f7804f
#define public_6f7805a _public_6f7805a

PROC_DECLARE(0x6f77e70, internal_6f77e70, public_6f77e70);
extern "C" NAKED register_t __cdecl internal_6f77e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x5C
        push ebx
        push ebp
        push edi
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        add ecx, 0xF8
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x6C]
        cmp dword ptr ds : [eax], 1
        jne public_6f77ea7
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+0x10]
        lea ebp, ds:[ecx+0x10]
        mov dword ptr ss : [esp+0xC], ebp
        add edi, 0x58
        jmp public_6f77eba
        public_6f77ea7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+0x10]
        lea eax, ds:[edx+0x10]
        mov dword ptr ss : [esp+0xC], eax
        add edi, 0x68
        mov ebp, eax
        public_6f77eba : nop
        mov ebx, dword ptr ds : [edi+4]
        test ebx, ebx
        je public_6f7805a
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebx
        sar eax, 2
        test eax, eax
        je public_6f7805a
        cmp ebx, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x74], 0xBF800000
        je public_6f77f93
        mov ebp, dword ptr ds : [public_6fb3664]
        public_6f77ef2 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call ebp
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x74]
        fcomp dword ptr ds : [public_6fb5e84]
        fnstsw ax
        test ah, 0x44
        jnp public_6f77f61
        fcom dword ptr ss : [esp+0x74]
        fnstsw ax
        test ah, 5
        jp public_6f77f7f
        public_6f77f61 : nop
        mov eax, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], edx
        jmp public_6f77f81
        public_6f77f7f : nop
        fstp st(0)
        public_6f77f81 : nop
        mov eax, dword ptr ds : [edi+8]
        add ebx, 4
        cmp ebx, eax
        jne public_6f77ef2
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f77f93 : nop
        fld dword ptr ss : [esp+0x74]
        mov edi, dword ptr ss : [esp+0x7C]
        fsqrt 
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fst dword ptr ss : [esp+0x80]
        fstp dword ptr ds : [edi]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [eax+0x30]
        add eax, 0x28
        cmp ecx, 1
        fld dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x20]
        pop esi
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        jne public_6f78028
        fld dword ptr ss : [esp+0x30]
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6fb444c]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_6f7804f
        fld dword ptr ss : [esp+0x70]
        mov al, 1
        fchs 
        fstp dword ptr ds : [edi]
        pop edi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0x10
        public_6f78028 : nop
        fxch st(2)
        fmul dword ptr ss : [esp+0x30]
        faddp st(2), st
        fxch st(2)
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6f7804f
        fld dword ptr ss : [esp+0x70]
        fchs 
        fstp dword ptr ds : [edi]
        public_6f7804f : nop
        pop edi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x5C
        ret 0x10
        public_6f7805a : nop
        pop edi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x5C
        ret 0x10
        UNREACHABLE_TRAP(0x6f77e70)
    }
}

#undef public_6f77ea7
#undef public_6f77eba
#undef public_6f77ef2
#undef public_6f77f61
#undef public_6f77f7f
#undef public_6f77f81
#undef public_6f77f93
#undef public_6f78028
#undef public_6f7804f
#undef public_6f7805a
