#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f494b0 _public_6f494b0
#define public_6f494bf _public_6f494bf
#define public_6f494d1 _public_6f494d1
#define public_6f494d5 _public_6f494d5
#define public_6f494d9 _public_6f494d9
#define public_6f494dc _public_6f494dc
#define public_6f49550 _public_6f49550
#define public_6f49563 _public_6f49563
#define public_6f49575 _public_6f49575
#define public_6f49586 _public_6f49586
#define public_6f4958d _public_6f4958d
#define public_6f495b4 _public_6f495b4
#define public_6f495b9 _public_6f495b9
#define public_6f495dd _public_6f495dd

PROC_DECLARE(0x6f49440, internal_6f49440, public_6f49440);
extern "C" NAKED register_t __cdecl internal_6f49440()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb35e0]
        mov eax, dword ptr ds : [esi+0xC]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [public_6fb3494]
        fild dword ptr ss : [esp+0x30]
        add esp, 0x10
        fadd dword ptr ss : [esp+0x14]
        call public_6fa9130
        mov edx, dword ptr ds : [public_6fd0bd8]
        mov ebx, eax
        mov eax, dword ptr ds : [public_6fd0bd4]
        xor ebp, ebp
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], 0
        mov ecx, eax
        je public_6f494d5
        lea esp, ss:[esp]
        public_6f494b0 : nop
        cmp dword ptr ds : [eax], ebx
        ja public_6f494bf
        mov ecx, eax
        add eax, 8
        cmp eax, edx
        jne public_6f494b0
        jmp public_6f494d1
        public_6f494bf : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], ebp
        fild qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        public_6f494d1 : nop
        cmp ecx, eax
        jne public_6f494d9
        public_6f494d5 : nop
        xor edi, edi
        jmp public_6f494dc
        public_6f494d9 : nop
        mov edi, dword ptr ds : [ecx+4]
        public_6f494dc : nop
        mov ecx, esi
        call public_6f33f80
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebp
        fild qword ptr ss : [esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        fstp dword ptr ss : [esp]
        push eax
        call dword ptr ds : [public_6fb3538]
        mov eax, dword ptr ds : [esi+0xDC]
        add esp, 8
        cmp eax, 0x2A
        jne public_6f495dd
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [public_6fb349c]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp edi, eax
        lea edx, ds:[eax+1]
        jae public_6f49575
        mov eax, dword ptr ds : [public_6fd0bd4]
        mov ecx, dword ptr ds : [public_6fd0bd8]
        cmp eax, ecx
        je public_6f49586
        lea esp, ss:[esp]
        public_6f49550 : nop
        cmp dword ptr ds : [eax+4], edx
        je public_6f49563
        add eax, 8
        cmp eax, ecx
        jne public_6f49550
        mov eax, 0x7FFFFFFF
        jmp public_6f495b9
        public_6f49563 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ebp
        fild qword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        public_6f49575 : nop
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jp public_6f4958d
        public_6f49586 : nop
        mov eax, 0x7FFFFFFF
        jmp public_6f495b9
        public_6f4958d : nop
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebp
        fild qword ptr ss : [esp+0x20]
        fsubr dword ptr ss : [esp+0x10]
        fld dword ptr ds : [public_6fb5810]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_6f495b4
        fstp st(0)
        fld dword ptr ds : [public_6fb5810]
        public_6f495b4 : nop
        call public_6fa9130
        public_6f495b9 : nop
        mov edx, dword ptr ds : [esi+0xC]
        push eax
        push edx
        call dword ptr ds : [public_6fb3624]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        cmp edi, eax
        jbe public_6f495dd
        mov eax, dword ptr ds : [esi+0xC]
        push edi
        push eax
        call dword ptr ds : [public_6fb3518]
        add esp, 8
        public_6f495dd : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f49440)
    }
}

#undef public_6f494b0
#undef public_6f494bf
#undef public_6f494d1
#undef public_6f494d5
#undef public_6f494d9
#undef public_6f494dc
#undef public_6f49550
#undef public_6f49563
#undef public_6f49575
#undef public_6f49586
#undef public_6f4958d
#undef public_6f495b4
#undef public_6f495b9
#undef public_6f495dd
