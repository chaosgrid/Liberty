#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0002);
CLANG_FORWARD_PROC_SYMBOL(public_6ad01d5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3330);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3390);
CLANG_FORWARD_PROC_SYMBOL(public_6ad33a5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad33d5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad342e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3479);
CLANG_FORWARD_PROC_SYMBOL(public_6ad351c);

#define public_6ad0016 _public_6ad0016
#define public_6ad0042 _public_6ad0042
#define public_6ad004f _public_6ad004f
#define public_6ad005d _public_6ad005d
#define public_6ad007a _public_6ad007a
#define public_6ad0099 _public_6ad0099
#define public_6ad00ac _public_6ad00ac
#define public_6ad00b5 _public_6ad00b5
#define public_6ad00bc _public_6ad00bc
#define public_6ad00c5 _public_6ad00c5
#define public_6ad00c9 _public_6ad00c9
#define public_6ad00df _public_6ad00df
#define public_6ad00fd _public_6ad00fd
#define public_6ad0138 _public_6ad0138
#define public_6ad017a _public_6ad017a
#define public_6ad0184 _public_6ad0184
#define public_6ad0195 _public_6ad0195
#define public_6ad01a9 _public_6ad01a9
#define public_6ad01b0 _public_6ad01b0

PROC_DECLARE(0x6ad0002, internal_6ad0002, public_6ad0002);
extern "C" NAKED register_t __cdecl internal_6ad0002()
{
    __asm
    {
        mov ecx, eax
        push eax
        wait 
        fnstcw word ptr ss : [esp]
        cmp word ptr ss : [esp], 0x27F
        je public_6ad0016
        call public_6ad33a5
        public_6ad0016 : nop
        and ecx, 0x7FF00000
        lea edx, ss:[esp+8]
        cmp ecx, 0x7FF00000
        je public_6ad00c9
        call public_6ad33d5
        je public_6ad00c5
        test eax, 0x7FF00000
        je public_6ad0138
        public_6ad0042 : nop
        mov cl, byte ptr ss : [esp+0xF]
        and cl, 0x80
        jne public_6ad01b0
        public_6ad004f : nop
        fyl2x 
        call public_6ad3390
        cmp cl, 1
        jne public_6ad005d
        fchs 
        public_6ad005d : nop
        cmp dword ptr ds : [public_6ae0e8c], 0
        jne public_6ad342e
        lea ecx, ds : [public_6add548]
        mov edx, 0x1D
        jmp public_6ad3479
        public_6ad007a : nop
        cmp dword ptr ds : [public_6ae0e8c], 0
        jne public_6ad342e
        lea ecx, ds : [public_6add548]
        mov edx, 0x1D
        call public_6ad3330
        pop edx
        ret 
        public_6ad0099 : nop
        lea edx, ss:[esp+8]
        call public_6ad33d5
        test byte ptr ss : [esp+0x16], 8
        jne public_6ad00ac
        inc ecx
        jmp public_6ad00df
        public_6ad00ac : nop
        faddp 
        mov eax, 1
        jmp public_6ad007a
        public_6ad00b5 : nop
        test byte ptr ss : [esp+0xE], 8
        jne public_6ad00ac
        public_6ad00bc : nop
        faddp 
        mov eax, 7
        jmp public_6ad007a
        public_6ad00c5 : nop
        xor ecx, ecx
        jmp public_6ad00df
        public_6ad00c9 : nop
        xor ecx, ecx
        and eax, 0xFFFFF
        or eax, dword ptr ss : [esp+0x10]
        jne public_6ad0099
        lea edx, ss:[esp+8]
        call public_6ad33d5
        public_6ad00df : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, eax
        and eax, 0x7FF00000
        and edx, 0xFFFFF
        cmp eax, 0x7FF00000
        jne public_6ad00fd
        or edx, dword ptr ss : [esp+8]
        jne public_6ad00b5
        public_6ad00fd : nop
        test ecx, ecx
        jne public_6ad00bc
        sub esp, 0x74
        mov ecx, esp
        push ecx
        sub esp, 0x10
        fstp qword ptr ss : [esp]
        fstp qword ptr ss : [esp+8]
        wait 
        fnsave ds:[ecx+8]
        call public_6ad351c
        add esp, 0x10
        pop ecx
        frstor ds:[ecx+8]
        fld qword ptr ds : [ecx]
        add esp, 0x74
        test eax, eax
        je public_6ad342e
        mov eax, 1
        jmp public_6ad007a
        public_6ad0138 : nop
        mov eax, dword ptr ss : [esp+0xC]
        and eax, 0xFFFFF
        or eax, dword ptr ss : [esp+8]
        jne public_6ad0042
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x14]
        test eax, 0x7FF00000
        je public_6ad0195
        call public_6ad01d5
        mov ch, byte ptr ss : [esp+0xF]
        shr ch, 7
        test dword ptr ss : [esp+0x17], 0x80
        je public_6ad0184
        fld tbyte ptr ds : [public_6addb80]
        test ch, cl
        je public_6ad017a
        fchs 
        public_6ad017a : nop
        mov eax, 2
        jmp public_6ad007a
        public_6ad0184 : nop
        fldz 
        test ch, cl
        je public_6ad342e
        fchs 
        jmp public_6ad342e
        public_6ad0195 : nop
        fstp st(0)
        and eax, 0xFFFFF
        or eax, dword ptr ss : [esp+0x10]
        jne public_6ad01a9
        fld1 
        jmp public_6ad342e
        public_6ad01a9 : nop
        fldz 
        jmp public_6ad342e
        public_6ad01b0 : nop
        fld st(1)
        call public_6ad01d5
        fchs 
        test cl, cl
        jne public_6ad004f
        fstp st(0)
        fstp st(0)
        fld tbyte ptr ds : [public_6addbe0]
        mov eax, 1
        jmp public_6ad007a
        UNREACHABLE_TRAP(0x6ad0002)
    }
}

#undef public_6ad0016
#undef public_6ad0042
#undef public_6ad004f
#undef public_6ad005d
#undef public_6ad007a
#undef public_6ad0099
#undef public_6ad00ac
#undef public_6ad00b5
#undef public_6ad00bc
#undef public_6ad00c5
#undef public_6ad00c9
#undef public_6ad00df
#undef public_6ad00fd
#undef public_6ad0138
#undef public_6ad017a
#undef public_6ad0184
#undef public_6ad0195
#undef public_6ad01a9
#undef public_6ad01b0
