#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40290);

#define public_6f402a7 _public_6f402a7
#define public_6f402c3 _public_6f402c3
#define public_6f402c7 _public_6f402c7
#define public_6f402e7 _public_6f402e7
#define public_6f402ef _public_6f402ef
#define public_6f402f5 _public_6f402f5
#define public_6f40302 _public_6f40302
#define public_6f40305 _public_6f40305
#define public_6f4030e _public_6f4030e

PROC_DECLARE(0x6f40290, internal_6f40290, public_6f40290);
extern "C" NAKED register_t __cdecl internal_6f40290()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        cmp ebp, ecx
        je public_6f4030e
        lea ebx, ss:[ebp+4]
        cmp ebx, ecx
        je public_6f4030e
        push esi
        push edi
        public_6f402a7 : nop
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        je public_6f402c3
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_6f402c3
        mov edi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, edi
        setl al
        test al, al
        jne public_6f402ef
        public_6f402c3 : nop
        mov edi, ebx
        mov ecx, ebx
        public_6f402c7 : nop
        sub ecx, 4
        test esi, esi
        je public_6f402e7
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f402e7
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, dword ptr ds : [eax+0x10]
        setl dl
        test dl, dl
        je public_6f402e7
        mov dword ptr ds : [edi], eax
        mov edi, ecx
        jmp public_6f402c7
        public_6f402e7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], esi
        jmp public_6f40305
        public_6f402ef : nop
        cmp ebp, ebx
        mov eax, ebx
        je public_6f40302
        public_6f402f5 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_6f402f5
        public_6f40302 : nop
        mov dword ptr ss : [ebp], esi
        public_6f40305 : nop
        add ebx, 4
        cmp ebx, ecx
        jne public_6f402a7
        pop edi
        pop esi
        public_6f4030e : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f40290)
    }
}

#undef public_6f402a7
#undef public_6f402c3
#undef public_6f402c7
#undef public_6f402e7
#undef public_6f402ef
#undef public_6f402f5
#undef public_6f40302
#undef public_6f40305
#undef public_6f4030e
