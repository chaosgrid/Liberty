#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63089b4 _public_63089b4
#define public_63089c1 _public_63089c1

PROC_DECLARE(0x6308930, internal_6308930, public_6308930);
extern "C" NAKED register_t __cdecl internal_6308930()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        push edi
        je public_63089b4
        mov al, byte ptr ds : [esi+0x21]
        test al, al
        je public_63089b4
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x10]
        mov edi, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x18]
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        sbb ecx, edi
        mov edi, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        fild qword ptr ss : [esp+8]
        sub edi, edx
        fmul qword ptr ds : [public_63fcec8]
        fst qword ptr ds : [esi]
        fmul qword ptr ds : [public_63a31c8]
        call public_6391dae
        mov edx, edi
        neg edx
        sub edx, eax
        mov eax, edx
        cdq 
        xor eax, edx
        sub eax, edx
        cmp eax, 0x32
        jle public_63089c1
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul qword ptr ds : [public_639c9f0]
        fstp qword ptr ds : [esi]
        fld qword ptr ds : [esi]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        public_63089b4 : nop
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+4], 0
        public_63089c1 : nop
        fld qword ptr ds : [esi]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6308930)
    }
}

#undef public_63089b4
#undef public_63089c1
