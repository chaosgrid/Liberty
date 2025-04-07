#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629ff50);

#define public_629ff60 _public_629ff60
#define public_629ff80 _public_629ff80
#define public_629ff8f _public_629ff8f
#define public_629ff9b _public_629ff9b
#define public_629ff9d _public_629ff9d
#define public_629ffa5 _public_629ffa5
#define public_629ffac _public_629ffac
#define public_629ffb5 _public_629ffb5
#define public_629ffbc _public_629ffbc

PROC_DECLARE(0x629ff50, internal_629ff50, public_629ff50);
extern "C" NAKED register_t __cdecl internal_629ff50()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi]
        test esi, esi
        je public_629ffbc
        push ebx
        nop 
        lea esp, ss:[esp]
        public_629ff60 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        jne public_629ffb5
        mov eax, dword ptr ds : [edi]
        xor ecx, ecx
        test eax, eax
        je public_629ffac
        nop 
        lea esp, ss:[esp]
        public_629ff80 : nop
        cmp eax, esi
        je public_629ff8f
        mov ecx, eax
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_629ff80
        jmp public_629ffac
        public_629ff8f : nop
        test ecx, ecx
        mov edx, dword ptr ds : [eax+4]
        je public_629ff9b
        mov dword ptr ds : [ecx+4], edx
        jmp public_629ff9d
        public_629ff9b : nop
        mov dword ptr ds : [edi], edx
        public_629ff9d : nop
        cmp eax, dword ptr ds : [edi+4]
        jne public_629ffa5
        mov dword ptr ds : [edi+4], ecx
        public_629ffa5 : nop
        mov dword ptr ds : [esi+4], 0
        public_629ffac : nop
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+8]
        public_629ffb5 : nop
        test ebx, ebx
        mov esi, ebx
        jne public_629ff60
        pop ebx
        public_629ffbc : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629ff50)
    }
}

#undef public_629ff60
#undef public_629ff80
#undef public_629ff8f
#undef public_629ff9b
#undef public_629ff9d
#undef public_629ffa5
#undef public_629ffac
#undef public_629ffb5
#undef public_629ffbc
