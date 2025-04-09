#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);
CLANG_FORWARD_PROC_SYMBOL(public_52a680);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);
CLANG_FORWARD_PROC_SYMBOL(public_533080);
CLANG_FORWARD_PROC_SYMBOL(public_533160);
CLANG_FORWARD_PROC_SYMBOL(public_533e10);
CLANG_FORWARD_PROC_SYMBOL(public_539740);

#define public_533e30 _public_533e30
#define public_533e53 _public_533e53
#define public_533e55 _public_533e55
#define public_533e74 _public_533e74
#define public_533ea4 _public_533ea4
#define public_533ea6 _public_533ea6
#define public_533eb5 _public_533eb5
#define public_533eed _public_533eed
#define public_533f10 _public_533f10
#define public_533f16 _public_533f16
#define public_533f40 _public_533f40
#define public_533f62 _public_533f62
#define public_533f98 _public_533f98
#define public_533fc1 _public_533fc1
#define public_533fc9 _public_533fc9
#define public_533fd8 _public_533fd8
#define public_533fe0 _public_533fe0
#define public_533ff9 _public_533ff9

PROC_DECLARE(0x533e10, internal_533e10, public_533e10);
extern "C" NAKED register_t __cdecl internal_533e10()
{
    __asm
    {
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_533080
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6944]
        mov esi, dword ptr ds : [public_5c64f0]
        mov edi, edi
        public_533e30 : nop
        test ebp, ebp
        je public_533e53
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_533e53
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533e53
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_533e55
        public_533e53 : nop
        xor eax, eax
        public_533e55 : nop
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ds:[eax+0xE4]
        call esi
        test eax, eax
        je public_533e74
        movzx eax, word ptr ds : [eax+8]
        push eax
        mov ecx, ebp
        call public_533160
        jmp public_533e30
        public_533e74 : nop
        call public_52a680
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_533ea4
        lea eax, ss:[ebp+0xC]
        test eax, eax
        je public_533ea4
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_533ea4
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_533ea4
        mov edi, eax
        jmp public_533ea6
        public_533ea4 : nop
        xor edi, edi
        public_533ea6 : nop
        mov edx, dword ptr ds : [edi+0x88]
        mov ebx, dword ptr ds : [edx+0x78]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_533f16
        public_533eb5 : nop
        mov ecx, edi
        call dword ptr ds : [public_5c6358]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_533eed
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [public_5c65ac]
        mov eax, dword ptr ss : [ebp]
        push 0xBF800000
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx]
        lea edx, ds:[esi+8]
        push ecx
        push edx
        push 0
        mov ecx, ebp
        call dword ptr ds : [eax+0x1C0]
        public_533eed : nop
        lea eax, ds:[esi+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_432240
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_533f10
        call dword ptr ds : [public_5c68a4]
        public_533f10 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_533eb5
        public_533f16 : nop
        lea eax, ss:[esp+0x24]
        lea ecx, ds:[edi+0x144]
        push eax
        mov byte ptr ss : [esp+0x28], 1
        mov dword ptr ss : [esp+0x24], ecx
        call dword ptr ds : [public_5c6584]
        mov ebx, eax
        test ebx, ebx
        je public_533ff9
        lea ebx, ds:[ebx]
        public_533f40 : nop
        mov edi, dword ptr ds : [public_5c6940]
        mov ecx, ebx
        call edi
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx]
        mov ecx, ebx
        call edi
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_533fe0
        public_533f62 : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c6964]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_533f98
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [ebp]
        push 0xBF800000
        push eax
        xor eax, eax
        mov ax, word ptr ds : [ecx+4]
        lea ecx, ds:[esi+8]
        push eax
        push ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [edx+0x1C0]
        public_533f98 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea edi, ds:[esi+8]
        push edi
        call public_52c7a0
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_533fc1
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_533fc1
        lea eax, ss:[esp+0x14]
        jmp public_533fc9
        public_533fc1 : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea eax, ss:[esp+0x18]
        public_533fc9 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_533fd8
        call dword ptr ds : [public_5c68a4]
        public_533fd8 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x1C]
        jne public_533f62
        public_533fe0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_5c6584]
        mov ebx, eax
        test ebx, ebx
        jne public_533f40
        public_533ff9 : nop
        mov ecx, ebp
        call public_539740
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x533e10)
    }
}

#undef public_533e30
#undef public_533e53
#undef public_533e55
#undef public_533e74
#undef public_533ea4
#undef public_533ea6
#undef public_533eb5
#undef public_533eed
#undef public_533f10
#undef public_533f16
#undef public_533f40
#undef public_533f62
#undef public_533f98
#undef public_533fc1
#undef public_533fc9
#undef public_533fd8
#undef public_533fe0
#undef public_533ff9
