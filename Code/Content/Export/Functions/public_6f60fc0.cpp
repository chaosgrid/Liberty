#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f60fc0);

#define public_6f61041 _public_6f61041
#define public_6f61077 _public_6f61077
#define public_6f6107b _public_6f6107b
#define public_6f610e9 _public_6f610e9
#define public_6f610ff _public_6f610ff
#define public_6f61140 _public_6f61140
#define public_6f61181 _public_6f61181

PROC_DECLARE(0x6f60fc0, internal_6f60fc0, public_6f60fc0);
extern "C" NAKED register_t __cdecl internal_6f60fc0()
{
    __asm
    {
        sub esp, 0x21C
        fld dword ptr ds : [public_6fbbbd0]
        push ebx
        fadd dword ptr ds : [public_6fbbbd4]
        push edi
        lea eax, ss:[esp+0x1C]
        push eax
        fadd dword ptr ss : [esp+0x23C]
        push 0xFDFF
        push ecx
        lea ecx, ss:[esp+0x238]
        fmul dword ptr ds : [public_6fb605c]
        lea edx, ss:[esp+0x30]
        lea eax, ss:[esp+0x234]
        fstp dword ptr ss : [esp]
        push ecx
        push 0x20
        push edx
        push eax
        call dword ptr ds : [public_6fb3460]
        mov eax, dword ptr ss : [esp+0x38]
        xor ebx, ebx
        add esp, 0x1C
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+8], ebx
        jbe public_6f610ff
        fld dword ptr ss : [esp+0x238]
        push ebp
        fmul dword ptr ds : [public_6fb605c]
        push esi
        lea ebp, ss:[esp+0xAC]
        lea esi, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x14]
        public_6f61041 : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call dword ptr ds : [public_6fb3630]
        mov ecx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x34]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov al, byte ptr ss : [esp+0x3C]
        add esp, 0x14
        test al, 3
        je public_6f61077
        fld dword ptr ds : [public_6fbbbd0]
        fadd dword ptr ss : [esp+0x10]
        jmp public_6f6107b
        public_6f61077 : nop
        fld dword ptr ss : [esp+0x10]
        public_6f6107b : nop
        fld dword ptr ss : [esp+0x14]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x234]
        fsub dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x238]
        fsub dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x23C]
        fsub dword ptr ss : [esp+0x20]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_6f610e9
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, ebp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+4], ecx
        inc ebx
        mov dword ptr ds : [edx+8], eax
        add ebp, 0xC
        public_6f610e9 : nop
        mov eax, dword ptr ss : [esp+0x24]
        inc edi
        add esi, 4
        cmp edi, eax
        jb public_6f61041
        pop esi
        mov dword ptr ss : [esp+0xC], ebx
        pop ebp
        public_6f610ff : nop
        mov edx, dword ptr ss : [esp+0x23C]
        xor eax, eax
        cmp ebx, eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+8], eax
        jle public_6f61181
        fild dword ptr ss : [esp+8]
        lea eax, ss:[esp+0xAC]
        mov ecx, ebx
        fdivr dword ptr ds : [public_6fb5810]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [public_6fb444c]
        fld dword ptr ds : [public_6fb444c]
        fld dword ptr ds : [public_6fb444c]
        lea ecx, ds:[ecx]
        public_6f61140 : nop
        fld dword ptr ss : [esp+8]
        add eax, 0xC
        dec ecx
        fmul dword ptr ds : [eax-0x14]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax-0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax-0xC]
        fstp dword ptr ss : [esp+0x18]
        faddp st(3), st
        fld dword ptr ss : [esp+0x14]
        faddp st(2), st
        fadd dword ptr ss : [esp+0x18]
        jne public_6f61140
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        fxch 
        fstp dword ptr ds : [edx]
        mov dword ptr ds : [edx+8], ecx
        fstp dword ptr ds : [edx+4]
        public_6f61181 : nop
        xor eax, eax
        test ebx, ebx
        pop edi
        setg al
        pop ebx
        add esp, 0x21C
        ret 
        UNREACHABLE_TRAP(0x6f60fc0)
    }
}

#undef public_6f61041
#undef public_6f61077
#undef public_6f6107b
#undef public_6f610e9
#undef public_6f610ff
#undef public_6f61140
#undef public_6f61181
