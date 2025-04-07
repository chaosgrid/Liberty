#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d40f00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d40f3c _public_6d40f3c
#define public_6d40f53 _public_6d40f53
#define public_6d40f6d _public_6d40f6d
#define public_6d40f80 _public_6d40f80
#define public_6d40fa0 _public_6d40fa0
#define public_6d40fa8 _public_6d40fa8
#define public_6d40fb3 _public_6d40fb3
#define public_6d40fbb _public_6d40fbb
#define public_6d40fce _public_6d40fce
#define public_6d40fd6 _public_6d40fd6
#define public_6d40fe8 _public_6d40fe8
#define public_6d40ff0 _public_6d40ff0
#define public_6d40ffc _public_6d40ffc
#define public_6d41020 _public_6d41020
#define public_6d41034 _public_6d41034
#define public_6d4105b _public_6d4105b
#define public_6d41063 _public_6d41063
#define public_6d4106c _public_6d4106c

PROC_DECLARE(0x6d40f00, internal_6d40f00, public_6d40f00);
extern "C" NAKED register_t __cdecl internal_6d40f00()
{
    __asm
    {
        push ecx
        mov ax, word ptr ss : [esp+8]
        cmp ax, 0xFF
        push esi
        push edi
        mov esi, ecx
        ja public_6d40f80
        mov cl, byte ptr ss : [esp+0x14]
        test cl, cl
        je public_6d40f53
        movsx edi, al
        push edi
        call dword ptr ds : [public_6d64ba8]
        xor ecx, ecx
        mov cl, al
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[esi+eax*4+8]
        jns public_6d40f3c
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d40f3c : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        push edi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6d64c50]
        add esp, 8
        public_6d40f53 : nop
        xor ecx, ecx
        mov cl, al
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[esi+eax*4+8]
        jns public_6d40f6d
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d40f6d : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        pop edi
        pop esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6d40f80 : nop
        mov word ptr ss : [esp+0x14], ax
        mov word ptr ss : [esp+0x16], ax
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x2C
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_6d40fa0
        xor ecx, ecx
        jmp public_6d40fa8
        public_6d40fa0 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d40fa8 : nop
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        jne public_6d40fb3
        xor eax, eax
        jmp public_6d40fbb
        public_6d40fb3 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, edx
        sar eax, 2
        public_6d40fbb : nop
        cmp ecx, eax
        jne public_6d4106c
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6d40fce
        xor eax, eax
        jmp public_6d40fd6
        public_6d40fce : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d40fd6 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        lea edx, ds:[eax+5]
        mov dword ptr ss : [esp+0x10], edx
        jne public_6d40fe8
        xor eax, eax
        jmp public_6d40ff0
        public_6d40fe8 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_6d40ff0 : nop
        cmp eax, edx
        jae public_6d4106c
        test edx, edx
        mov eax, edx
        jge public_6d40ffc
        xor eax, eax
        public_6d40ffc : nop
        push ebx
        lea ecx, ds:[eax*4]
        push ebp
        push ecx
        call public_6d60012
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        je public_6d41034
        mov edi, edi
        public_6d41020 : nop
        push edi
        push ebx
        call public_6d06720
        add edi, 4
        add esp, 8
        add ebx, 4
        cmp edi, ebp
        jne public_6d41020
        public_6d41034 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ds:[edx+eax*4]
        add esp, 4
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        pop ebp
        pop ebx
        jne public_6d4105b
        xor eax, eax
        jmp public_6d41063
        public_6d4105b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6d41063 : nop
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        public_6d4106c : nop
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+8]
        push ecx
        push 1
        push edx
        mov ecx, esi
        call public_6cecbd0
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d40f00)
    }
}

#undef public_6d40f3c
#undef public_6d40f53
#undef public_6d40f6d
#undef public_6d40f80
#undef public_6d40fa0
#undef public_6d40fa8
#undef public_6d40fb3
#undef public_6d40fbb
#undef public_6d40fce
#undef public_6d40fd6
#undef public_6d40fe8
#undef public_6d40ff0
#undef public_6d40ffc
#undef public_6d41020
#undef public_6d41034
#undef public_6d4105b
#undef public_6d41063
#undef public_6d4106c
