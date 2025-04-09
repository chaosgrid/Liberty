#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);

#define public_5958a0 _public_5958a0
#define public_5958a8 _public_5958a8
#define public_59591a _public_59591a
#define public_595926 _public_595926
#define public_595943 _public_595943
#define public_595951 _public_595951
#define public_59598d _public_59598d
#define public_5959b3 _public_5959b3
#define public_595a68 _public_595a68
#define public_595aae _public_595aae
#define public_595ab6 _public_595ab6
#define public_595b28 _public_595b28
#define public_595b34 _public_595b34
#define public_595b51 _public_595b51
#define public_595b5f _public_595b5f
#define public_595b9f _public_595b9f
#define public_595bc7 _public_595bc7
#define public_595c71 _public_595c71
#define public_595c93 _public_595c93

PROC_DECLARE(0x595840, internal_595840, public_595840);
extern "C" NAKED register_t __cdecl internal_595840()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x42C]
        sub esp, 0xC
        xor edx, edx
        cmp al, dl
        push ebx
        mov bl, byte ptr ds : [ecx+0x3B4]
        je public_595a68
        cmp bl, dl
        fld dword ptr ds : [ecx+0x338]
        fadd dword ptr ds : [ecx+0x3B0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x334]
        fsub dword ptr ds : [ecx+0x338]
        fsub dword ptr ds : [ecx+0x3B0]
        je public_5958a0
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [ecx+0x3C4]
        fld dword ptr ds : [ecx+0x338]
        fmul dword ptr ds : [public_5cfc9c]
        jmp public_5958a8
        public_5958a0 : nop
        fld dword ptr ds : [ecx+0x338]
        fadd st(0), st
        public_5958a8 : nop
        fsubr dword ptr ds : [ecx+0x334]
        fld dword ptr ds : [ecx+0x3B0]
        fadd st(0), st
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x3C4]
        fcomp dword ptr ds : [ecx+0x3C0]
        fnstsw ax
        test ah, 0x44
        jnp public_595943
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [ecx+0x3C0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x3C8]
        fsub dword ptr ds : [ecx+0x3C0]
        fmul dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x3CC]
        fdiv dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jp public_59591a
        mov dword ptr ss : [esp+4], 0x3C23D70A
        public_59591a : nop
        cmp bl, dl
        je public_595926
        mov dword ptr ss : [esp+4], 0
        public_595926 : nop
        fld dword ptr ss : [esp+4]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_595951
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        jmp public_595951
        public_595943 : nop
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+4], eax
        public_595951 : nop
        cmp bl, dl
        fld dword ptr ds : [ecx+0x338]
        fchs 
        je public_59598d
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x338]
        fadd st(0), st
        fadd st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x394], eax
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0x38C]
        jmp public_5959b3
        public_59598d : nop
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        fadd st, st(1)
        fstp dword ptr ds : [ecx+0x38C]
        fld dword ptr ss : [esp+4]
        fadd st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [ecx+0x394]
        fstp st(0)
        public_5959b3 : nop
        mov dword ptr ds : [ecx+0x390], edx
        mov dword ptr ds : [ecx+0x398], eax
        fld dword ptr ds : [ecx+0x338]
        fchs 
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x338]
        mov dword ptr ds : [ecx+0x33C], edx
        fstp dword ptr ds : [ecx+0x344]
        mov dword ptr ds : [ecx+0x340], edx
        fstp dword ptr ds : [ecx+0x348]
        fld dword ptr ds : [ecx+0x338]
        fchs 
        fld dword ptr ds : [ecx+0x334]
        fld dword ptr ds : [ecx+0x334]
        fsub dword ptr ds : [ecx+0x338]
        mov dword ptr ds : [ecx+0x354], edx
        fstp dword ptr ds : [ecx+0x350]
        fstp dword ptr ds : [ecx+0x358]
        fstp dword ptr ds : [ecx+0x35C]
        fld dword ptr ds : [ecx+0x338]
        fchs 
        fld dword ptr ds : [ecx+0x38C]
        mov dword ptr ds : [ecx+0x364], eax
        fstp dword ptr ds : [ecx+0x36C]
        mov dword ptr ds : [ecx+0x368], edx
        fstp dword ptr ds : [ecx+0x370]
        fld dword ptr ds : [ecx+0x338]
        fchs 
        fld dword ptr ds : [ecx+0x394]
        mov dword ptr ds : [ecx+0x37C], edx
        fstp dword ptr ds : [ecx+0x378]
        fxch 
        fstp dword ptr ds : [ecx+0x380]
        jmp public_595c71
        public_595a68 : nop
        cmp bl, dl
        fld dword ptr ds : [ecx+0x334]
        fadd dword ptr ds : [ecx+0x3B0]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x338]
        fsub dword ptr ds : [ecx+0x334]
        fsub dword ptr ds : [ecx+0x3B0]
        je public_595aae
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [ecx+0x3C4]
        fld dword ptr ds : [ecx+0x334]
        fmul dword ptr ds : [public_5cfc9c]
        jmp public_595ab6
        public_595aae : nop
        fld dword ptr ds : [ecx+0x334]
        fadd st(0), st
        public_595ab6 : nop
        fsubr dword ptr ds : [ecx+0x338]
        fld dword ptr ds : [ecx+0x3B0]
        fadd st(0), st
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x3C4]
        fcomp dword ptr ds : [ecx+0x3C0]
        fnstsw ax
        test ah, 0x44
        jnp public_595b51
        fld dword ptr ds : [ecx+0x3C4]
        fsub dword ptr ds : [ecx+0x3C0]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x3C8]
        fsub dword ptr ds : [ecx+0x3C0]
        fmul dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [ecx+0x3CC]
        fdiv dword ptr ss : [esp+4]
        fst dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c99c8]
        fnstsw ax
        test ah, 5
        jp public_595b28
        mov dword ptr ss : [esp+4], 0x3C23D70A
        public_595b28 : nop
        cmp bl, dl
        je public_595b34
        mov dword ptr ss : [esp+4], 0
        public_595b34 : nop
        fld dword ptr ss : [esp+4]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_595b5f
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+4]
        jmp public_595b5f
        public_595b51 : nop
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [public_5c7474]
        mov dword ptr ss : [esp+4], eax
        public_595b5f : nop
        cmp bl, dl
        fld dword ptr ds : [ecx+0x334]
        je public_595b9f
        mov eax, dword ptr ds : [ecx+0x334]
        fadd st(0), st
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ds : [ecx+0x394], eax
        fadd st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x398], eax
        fchs 
        fstp dword ptr ds : [ecx+0x390]
        jmp public_595bc7
        public_595b9f : nop
        fld st(1)
        fadd dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ds : [ecx+0x390]
        fstp dword ptr ds : [ecx+0x394]
        fld dword ptr ss : [esp+4]
        fadd st, st(1)
        fadd dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ds : [ecx+0x398]
        fstp st(0)
        public_595bc7 : nop
        mov dword ptr ds : [ecx+0x38C], edx
        fld dword ptr ds : [ecx+0x334]
        fchs 
        fld dword ptr ds : [ecx+0x334]
        mov dword ptr ds : [ecx+0x33C], edx
        fstp dword ptr ds : [ecx+0x344]
        mov dword ptr ds : [ecx+0x340], edx
        fstp dword ptr ds : [ecx+0x348]
        fld dword ptr ds : [ecx+0x338]
        fchs 
        fld dword ptr ds : [ecx+0x334]
        fld dword ptr ds : [ecx+0x338]
        fsub dword ptr ds : [ecx+0x334]
        mov dword ptr ds : [ecx+0x350], edx
        fchs 
        fstp dword ptr ds : [ecx+0x354]
        fstp dword ptr ds : [ecx+0x358]
        fstp dword ptr ds : [ecx+0x35C]
        fld dword ptr ds : [ecx+0x390]
        fld dword ptr ds : [ecx+0x334]
        mov dword ptr ds : [ecx+0x364], edx
        fld dword ptr ss : [esp+0xC]
        fchs 
        fstp dword ptr ds : [ecx+0x368]
        fstp dword ptr ds : [ecx+0x36C]
        fstp dword ptr ds : [ecx+0x370]
        fld dword ptr ds : [ecx+0x334]
        fld dword ptr ds : [ecx+0x398]
        mov dword ptr ds : [ecx+0x378], edx
        fstp dword ptr ds : [ecx+0x37C]
        fstp dword ptr ds : [ecx+0x380]
        fchs 
        public_595c71 : nop
        fstp dword ptr ds : [ecx+0x384]
        mov al, byte ptr ds : [ecx+0x3B4]
        cmp al, dl
        je public_595c93
        fld dword ptr ds : [ecx+0x3C4]
        fadd dword ptr ds : [public_5c75dc]
        fstp dword ptr ds : [ecx+0x3C4]
        public_595c93 : nop
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x595840)
    }
}

#undef public_5958a0
#undef public_5958a8
#undef public_59591a
#undef public_595926
#undef public_595943
#undef public_595951
#undef public_59598d
#undef public_5959b3
#undef public_595a68
#undef public_595aae
#undef public_595ab6
#undef public_595b28
#undef public_595b34
#undef public_595b51
#undef public_595b5f
#undef public_595b9f
#undef public_595bc7
#undef public_595c71
#undef public_595c93
