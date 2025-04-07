#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714270);

#define public_671429c _public_671429c
#define public_67142a8 _public_67142a8
#define public_67142b9 _public_67142b9
#define public_67142cb _public_67142cb

PROC_DECLARE(0x6714270, internal_6714270, public_6714270);
extern "C" NAKED register_t __cdecl internal_6714270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, 0xA
        cdq 
        idiv ecx
        mov eax, dword ptr ss : [esp+4]
        add eax, 2
        add edx, 0x30
        mov word ptr ds : [eax-2], dx
        mov cl, byte ptr ds : [public_67190a4]
        test cl, cl
        je public_671429c
        mov word ptr ds : [eax], 0x20
        add eax, 2
        public_671429c : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov cx, word ptr ds : [edx]
        test cx, cx
        je public_67142b9
        public_67142a8 : nop
        add edx, 2
        mov word ptr ds : [eax], cx
        add eax, 2
        mov cx, word ptr ds : [edx]
        test cx, cx
        jne public_67142a8
        public_67142b9 : nop
        mov cl, byte ptr ds : [public_67190a4]
        test cl, cl
        jne public_67142cb
        mov word ptr ds : [eax], 0x20
        add eax, 2
        public_67142cb : nop
        mov word ptr ds : [eax], 0
        ret 
        UNREACHABLE_TRAP(0x6714270)
    }
}

#undef public_671429c
#undef public_67142a8
#undef public_67142b9
#undef public_67142cb
