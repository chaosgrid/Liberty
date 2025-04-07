#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6290530);
CLANG_FORWARD_PROC_SYMBOL(public_62b5100);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b510f _public_62b510f
#define public_62b5117 _public_62b5117
#define public_62b512b _public_62b512b
#define public_62b5150 _public_62b5150
#define public_62b5164 _public_62b5164
#define public_62b5170 _public_62b5170
#define public_62b517e _public_62b517e
#define public_62b51b2 _public_62b51b2
#define public_62b51c3 _public_62b51c3

PROC_DECLARE(0x62b5100, internal_62b5100, public_62b5100);
extern "C" NAKED register_t __cdecl internal_62b5100()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_62b510f
        xor eax, eax
        jmp public_62b5117
        public_62b510f : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_62b5117 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        jae public_62b51c3
        test ecx, ecx
        mov eax, ecx
        jge public_62b512b
        xor eax, eax
        public_62b512b : nop
        push ebx
        push ebp
        shl eax, 3
        push edi
        push eax
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_62b5164
        lea ebx, ds:[ebx]
        public_62b5150 : nop
        push edi
        push ebx
        call public_6290530
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_62b5150
        public_62b5164 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_62b517e
        mov edi, edi
        public_62b5170 : nop
        mov ecx, edi
        call public_62881d0
        add edi, 8
        cmp edi, ebx
        jne public_62b5170
        public_62b517e : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        lea ecx, ds:[edx+eax*8]
        pop edi
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        pop ebp
        pop ebx
        jne public_62b51b2
        xor eax, eax
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ecx
        ret 4
        public_62b51b2 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        public_62b51c3 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b5100)
    }
}

#undef public_62b510f
#undef public_62b5117
#undef public_62b512b
#undef public_62b5150
#undef public_62b5164
#undef public_62b5170
#undef public_62b517e
#undef public_62b51b2
#undef public_62b51c3
