#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6380e30);

#define public_6380e57 _public_6380e57
#define public_6380e63 _public_6380e63
#define public_6380e7e _public_6380e7e
#define public_6380e8a _public_6380e8a
#define public_6380ebd _public_6380ebd
#define public_6380eef _public_6380eef
#define public_6380f00 _public_6380f00
#define public_6380f02 _public_6380f02
#define public_6380f0b _public_6380f0b
#define public_6380f36 _public_6380f36

PROC_DECLARE(0x6380e30, internal_6380e30, public_6380e30);
extern "C" NAKED register_t __cdecl internal_6380e30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x1C
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        push edi
        je public_6380e63
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6380e63
        mov edx, 0xFEFFFFFF
        public_6380e57 : nop
        and dword ptr ds : [eax+0x14], edx
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6380e57
        public_6380e63 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [ebx+0x34]
        test eax, eax
        mov edi, 0x1000000
        je public_6380e8a
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        je public_6380e8a
        public_6380e7e : nop
        or dword ptr ds : [eax+0x14], edi
        mov eax, dword ptr ds : [ecx]
        add ecx, 4
        test eax, eax
        jne public_6380e7e
        public_6380e8a : nop
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_6380f0b
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6380f0b
        public_6380ebd : nop
        test dword ptr ds : [eax+0x14], edi
        jne public_6380f02
        inc dword ptr ds : [public_658ba58]
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
        push edx
        call public_637fd60
        fld qword ptr ss : [esp+0x2C]
        fcom qword ptr ss : [esp+0x24]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_6380eef
        fstp qword ptr ss : [esp+0x18]
        jmp public_6380f02
        public_6380eef : nop
        fcom qword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6380f00
        fstp qword ptr ss : [esp+0x10]
        jmp public_6380f02
        public_6380f00 : nop
        fstp st(0)
        public_6380f02 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6380ebd
        public_6380f0b : nop
        mov eax, dword ptr ss : [ebp+0x10]
        fld qword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+0x14]
        fstp qword ptr ds : [eax]
        fld qword ptr ss : [esp+0x10]
        fstp qword ptr ds : [ecx]
        fld qword ptr ss : [esp+0x18]
        fchs 
        fld qword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6380f36
        fstp st(0)
        fld qword ptr ss : [esp+0x10]
        public_6380f36 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6380e30)
    }
}

#undef public_6380e57
#undef public_6380e63
#undef public_6380e7e
#undef public_6380e8a
#undef public_6380ebd
#undef public_6380eef
#undef public_6380f00
#undef public_6380f02
#undef public_6380f0b
#undef public_6380f36
