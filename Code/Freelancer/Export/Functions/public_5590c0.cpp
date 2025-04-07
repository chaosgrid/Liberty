#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);
CLANG_FORWARD_PROC_SYMBOL(public_556090);
CLANG_FORWARD_PROC_SYMBOL(public_576240);

#define public_5590fd _public_5590fd
#define public_559106 _public_559106
#define public_55915f _public_55915f
#define public_559188 _public_559188
#define public_5591a7 _public_5591a7
#define public_5591b9 _public_5591b9
#define public_559209 _public_559209
#define public_55922f _public_55922f
#define public_559238 _public_559238
#define public_559269 _public_559269
#define public_559273 _public_559273

PROC_DECLARE(0x5590c0, internal_5590c0, public_5590c0);
extern "C" NAKED register_t __cdecl internal_5590c0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        sub eax, 5
        mov ecx, dword ptr ds : [public_616840]
        mov edx, dword ptr ds : [public_616844]
        push ebx
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        je public_5591a7
        dec eax
        jne public_5590fd
        call public_576240
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        je public_5590fd
        mov eax, dword ptr ds : [public_679a0c]
        test eax, eax
        je public_559106
        public_5590fd : nop
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_559106 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [public_6799fc], eax
        push edx
        lea eax, ss:[esp+8]
        push eax
        xor bl, bl
        mov byte ptr ds : [public_679a04], 1
        mov dword ptr ds : [public_679a00], ecx
        call public_556090
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [public_679a08]
        add esp, 8
        cmp eax, ecx
        je public_559188
        test ecx, ecx
        je public_55915f
        mov byte ptr ds : [ecx+0xD], bl
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [public_679a08]
        push 2
        call public_555f00
        mov eax, dword ptr ss : [esp+0x18]
        public_55915f : nop
        test eax, eax
        mov dword ptr ds : [public_679a08], eax
        je public_559273
        lea edx, ss:[esp+4]
        push edx
        mov byte ptr ds : [eax+0xD], 1
        mov ecx, dword ptr ds : [public_679a08]
        push 1
        call public_555f00
        mov ecx, dword ptr ds : [public_679a08]
        public_559188 : nop
        test ecx, ecx
        je public_559273
        lea eax, ss:[esp+4]
        push eax
        push 3
        call public_555f00
        mov bl, 1
        mov al, bl
        pop ebx
        add esp, 0x10
        ret 4
        public_5591a7 : nop
        mov eax, dword ptr ds : [public_679a0c]
        test eax, eax
        je public_5591b9
        mov eax, dword ptr ds : [public_679a08]
        xor bl, bl
        jmp public_559238
        public_5591b9 : nop
        mov dword ptr ds : [public_6799fc], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [public_679a00], edx
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov byte ptr ds : [public_679a04], 1
        call public_556090
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [public_679a08]
        add esp, 8
        cmp ecx, eax
        je public_55922f
        test eax, eax
        je public_559209
        mov byte ptr ds : [eax+0xD], 0
        mov ecx, dword ptr ds : [public_679a08]
        lea eax, ss:[esp+4]
        push eax
        push 2
        call public_555f00
        mov ecx, dword ptr ss : [esp+0x18]
        public_559209 : nop
        test ecx, ecx
        mov eax, ecx
        mov dword ptr ds : [public_679a08], eax
        je public_55922f
        mov byte ptr ds : [ecx+0xD], 1
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [public_679a08]
        push 1
        call public_555f00
        mov eax, dword ptr ds : [public_679a08]
        public_55922f : nop
        test eax, eax
        setne bl
        test bl, bl
        jne public_559273
        public_559238 : nop
        test eax, eax
        mov byte ptr ds : [public_679a04], 0
        je public_559269
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        push edx
        mov byte ptr ds : [eax+0xD], 0
        mov ecx, dword ptr ds : [public_679a08]
        push 2
        call public_555f00
        public_559269 : nop
        mov dword ptr ds : [public_679a08], 0
        public_559273 : nop
        mov al, bl
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5590c0)
    }
}

#undef public_5590fd
#undef public_559106
#undef public_55915f
#undef public_559188
#undef public_5591a7
#undef public_5591b9
#undef public_559209
#undef public_55922f
#undef public_559238
#undef public_559269
#undef public_559273
