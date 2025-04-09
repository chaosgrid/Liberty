#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4061a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_40600f _public_40600f
#define public_406023 _public_406023
#define public_406031 _public_406031
#define public_40603d _public_40603d
#define public_406046 _public_406046
#define public_40604d _public_40604d
#define public_4060e0 _public_4060e0
#define public_406131 _public_406131
#define public_406175 _public_406175
#define public_406188 _public_406188
#define public_406196 _public_406196

PROC_DECLARE(0x405fb0, internal_405fb0, public_405fb0);
extern "C" NAKED register_t __cdecl internal_405fb0()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [edx+0xC]
        xor edi, edi
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_406196
        cmp eax, edi
        je public_406196
        movzx eax, word ptr ds : [eax+0xA]
        cmp eax, edi
        mov dword ptr ds : [esi], eax
        je public_406196
        movzx eax, word ptr ss : [ebp+0xC]
        mov ecx, 0xC
        mov edx, eax
        and edx, ecx
        cmp dl, cl
        mov dword ptr ss : [esp+0x2C], edi
        jne public_40600f
        mov dword ptr ss : [esp+0x2C], 0x1C
        jmp public_406031
        public_40600f : nop
        mov edx, eax
        and edx, 4
        cmp dl, 4
        jne public_406023
        mov dword ptr ss : [esp+0x2C], 0x10
        jmp public_406031
        public_406023 : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_406031
        mov dword ptr ss : [esp+0x2C], ecx
        public_406031 : nop
        test al, 0x10
        mov dword ptr ss : [esp+0xC], edi
        je public_40603d
        mov dword ptr ss : [esp+0xC], ecx
        public_40603d : nop
        test al, 0x40
        je public_406046
        mov edi, 4
        public_406046 : nop
        test al, al
        jns public_40604d
        add edi, 4
        public_40604d : nop
        push ebx
        push eax
        call public_4061a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x34]
        add ebx, edi
        add ebx, ecx
        add ebx, eax
        mov eax, dword ptr ds : [esi]
        shl eax, 4
        push eax
        call public_5b7e84
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ss : [esp+0x1C]
        movzx eax, word ptr ds : [eax+0xC]
        lea ecx, ds:[eax+eax]
        push ecx
        mov dword ptr ds : [esi+8], eax
        call public_5b7e84
        mov dword ptr ds : [esi+0xC], eax
        movzx eax, word ptr ss : [ebp+0xE]
        lea edi, ds:[eax+eax]
        push edi
        call public_5b7e84
        mov edx, eax
        mov ecx, edi
        or eax, 0xFFFFFFFF
        mov edi, edx
        mov dword ptr ss : [esp+0x40], edx
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        movzx eax, word ptr ss : [ebp+8]
        movzx ecx, word ptr ss : [ebp+0xA]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*2]
        lea ecx, ss:[ebp+eax*2+0x10]
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x10
        xor edx, edx
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_406188
        lea esp, ss:[esp]
        public_4060e0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cx, word ptr ds : [eax+ebp*2+0x10]
        mov ax, word ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x30]
        add ax, cx
        movzx ecx, cx
        movzx eax, ax
        lea ecx, ds:[edi+ecx*2]
        imul eax, ebx
        mov di, word ptr ds : [ecx]
        cmp di, 0xFFFF
        jne public_406175
        mov edi, edx
        inc edx
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ss : [esp+0x10]
        add eax, edx
        mov word ptr ds : [ecx], di
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_61649c]
        test eax, eax
        jne public_406131
        call public_5b73e0
        mov dword ptr ds : [public_61649c], eax
        public_406131 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x20]
        xor eax, eax
        mov ax, di
        shl eax, 4
        add ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+eax+0xC], edx
        mov edx, dword ptr ss : [esp+0x1C]
        public_406175 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov word ptr ds : [eax+ebp*2], di
        mov eax, dword ptr ds : [esi+8]
        inc ebp
        cmp ebp, eax
        jb public_4060e0
        public_406188 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        call public_5b7e1d
        add esp, 4
        pop ebx
        public_406196 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x405fb0)
    }
}

#undef public_40600f
#undef public_406023
#undef public_406031
#undef public_40603d
#undef public_406046
#undef public_40604d
#undef public_4060e0
#undef public_406131
#undef public_406175
#undef public_406188
#undef public_406196
