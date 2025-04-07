#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356960);
CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6378600);
CLANG_FORWARD_PROC_SYMBOL(public_6380cf0);

#define public_6380d21 _public_6380d21
#define public_6380d3e _public_6380d3e
#define public_6380d5c _public_6380d5c
#define public_6380d70 _public_6380d70
#define public_6380d87 _public_6380d87

PROC_DECLARE(0x6380cf0, internal_6380cf0, public_6380cf0);
extern "C" NAKED register_t __cdecl internal_6380cf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        push ebx
        call public_636ec10
        add esp, 4
        cmp eax, 2
        mov dword ptr ss : [esp+0xC], eax
        jge public_6380d21
        push eax
/*FIXUP push offset public_63f6740 @0x6380d09*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f6740
        call public_6356960
        push 0
        push 0
        push 5
        call public_6378600
        add esp, 0x14
        public_6380d21 : nop
        mov eax, dword ptr ds : [public_658b804]
        push eax
        call public_6377e60
        mov ecx, dword ptr ds : [public_658b24c]
        add esp, 4
        xor edi, edi
        test ecx, ecx
        jle public_6380d87
        push esi
        mov esi, eax
        public_6380d3e : nop
        test ebx, ebx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        je public_6380d70
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ebx+4]
        add edx, 4
        test ecx, ecx
        je public_6380d70
        public_6380d5c : nop
        mov ecx, dword ptr ds : [ecx+8]
        fld qword ptr ds : [ecx+edi*8]
        add edx, 4
        fadd qword ptr ds : [esi]
        fstp qword ptr ds : [esi]
        mov ecx, dword ptr ds : [edx-4]
        test ecx, ecx
        jne public_6380d5c
        public_6380d70 : nop
        fild dword ptr ss : [esp+0x10]
        inc edi
        add esi, 8
        fdivr qword ptr ds : [esi-8]
        fstp qword ptr ds : [esi-8]
        cmp edi, dword ptr ds : [public_658b24c]
        jl public_6380d3e
        pop esi
        public_6380d87 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6380cf0)
    }
}

#undef public_6380d21
#undef public_6380d3e
#undef public_6380d5c
#undef public_6380d70
#undef public_6380d87
