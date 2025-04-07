#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec0a6e _public_6ec0a6e
#define public_6ec0a77 _public_6ec0a77
#define public_6ec0a84 _public_6ec0a84
#define public_6ec0a89 _public_6ec0a89
#define public_6ec0ab9 _public_6ec0ab9
#define public_6ec0acd _public_6ec0acd
#define public_6ec0acf _public_6ec0acf
#define public_6ec0ad8 _public_6ec0ad8

PROC_DECLARE(0x6ec0930, internal_6ec0930, public_6ec0930);
extern "C" NAKED register_t __cdecl internal_6ec0930()
{
    __asm
    {
        sub esp, 0x44
        push ebp
        mov ebp, dword ptr ss : [esp+0x50]
        test ebp, ebp
        push esi
        push edi
        mov esi, ecx
        mov byte ptr ss : [esp+0xF], 0
        je public_6ec0a77
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec0a77
        mov ecx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6ec0a77
        call public_6f478c0
        test eax, eax
        je public_6ec0a77
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x8C], eax
        je public_6ec0a77
        mov edi, dword ptr ds : [public_6fb3664]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call edi
        add esp, 0xC
        test eax, eax
        jne public_6ec0a77
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x40]
        push eax
        call public_6f15b90
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0x90], eax
        je public_6ec0a77
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call edi
        add esp, 0xC
        test eax, eax
        jne public_6ec0a77
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edi, dword ptr ds : [public_6fb362c]
        mov dword ptr ss : [esp+0x58], eax
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x58]
        push eax
        push ecx
        call edi
        mov eax, dword ptr ds : [esi+0x90]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call edi
        mov ecx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        cmp ecx, eax
        jne public_6ec0a77
        fld dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [esi+0x78]
        fsub dword ptr ss : [esp+0x20]
        test al, al
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        je public_6ec0a84
        test ah, 5
        jnp public_6ec0a89
        public_6ec0a6e : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [esi+0x7C], eax
        public_6ec0a77 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        add esp, 0x44
        ret 8
        public_6ec0a84 : nop
        test ah, 0x41
        jne public_6ec0a6e
        public_6ec0a89 : nop
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [esi+0x84]
        test ecx, ecx
        fsub dword ptr ds : [esi+0x88]
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi+0x88], edx
        je public_6ec0acd
        fcom dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ec0ab9
        cmp ecx, 1
        je public_6ec0acd
        public_6ec0ab9 : nop
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 1
        jne public_6ec0ad8
        cmp ecx, 2
        jne public_6ec0ad8
        jmp public_6ec0acf
        public_6ec0acd : nop
        fstp st(0)
        public_6ec0acf : nop
        fld dword ptr ds : [esi+0x7C]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ds : [esi+0x7C]
        public_6ec0ad8 : nop
        fld dword ptr ds : [esi+0x7C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6ec0a77
        pop edi
        mov byte ptr ss : [esp+0xB], 1
        mov al, byte ptr ss : [esp+0xB]
        pop esi
        pop ebp
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6ec0930)
    }
}

#undef public_6ec0a6e
#undef public_6ec0a77
#undef public_6ec0a84
#undef public_6ec0a89
#undef public_6ec0ab9
#undef public_6ec0acd
#undef public_6ec0acf
#undef public_6ec0ad8
