#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418180);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_4181b5 _public_4181b5
#define public_4181d2 _public_4181d2
#define public_4181e0 _public_4181e0
#define public_418244 _public_418244
#define public_418249 _public_418249
#define public_418256 _public_418256
#define public_418260 _public_418260
#define public_418280 _public_418280
#define public_41828d _public_41828d
#define public_4182ac _public_4182ac
#define public_4182b5 _public_4182b5
#define public_418315 _public_418315
#define public_418319 _public_418319
#define public_41831e _public_41831e
#define public_418320 _public_418320
#define public_418336 _public_418336
#define public_418344 _public_418344
#define public_41835a _public_41835a
#define public_41835e _public_41835e
#define public_418381 _public_418381
#define public_4183a5 _public_4183a5

PROC_DECLARE(0x418180, internal_418180, public_418180);
extern "C" NAKED register_t __cdecl internal_418180()
{
    __asm
    {
        mov eax, 0x201C
        call public_5b7e90
        mov eax, dword ptr ss : [esp+0x2024]
        push eax
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_5c71c8]
        xor ecx, ecx
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        jle public_4183a5
        push ebx
        push ebp
        push esi
        push edi
        public_4181b5 : nop
        mov eax, dword ptr ss : [esp+0x2038]
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], ecx
        public_4181d2 : nop
        xor edi, edi
        xor bl, bl
        mov dword ptr ss : [esp+0x18], edi
        or ebp, 0xFFFFFFFF
        lea ecx, ds:[ecx]
        public_4181e0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x2030]
        mov eax, dword ptr ds : [ecx]
        xor esi, esi
        mov si, word ptr ds : [edx+edi*2]
        push esi
        call dword ptr ds : [eax+0x14]
        test si, si
        je public_418336
        cmp si, 0xD
        je public_418319
        cmp si, 0xA
        je public_418319
        cmp si, 0x20
        je public_418315
        cmp si, 9
        je public_418315
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 0x41
        jnp public_418320
        fstp st(0)
        mov ebp, 3
        public_418244 : nop
        mov esi, 2
        public_418249 : nop
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_418256
        cmp ebp, 3
        je public_4182ac
        public_418256 : nop
        test edi, edi
        jle public_41828d
        mov edx, edi
        lea esp, ss:[esp]
        public_418260 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ax, word ptr ds : [ecx]
        cmp ax, 0xD
        je public_418280
        cmp ax, 0xA
        je public_418280
        mov ecx, dword ptr ss : [esp+0x1C]
        mov word ptr ds : [ecx], ax
        add ecx, esi
        mov dword ptr ss : [esp+0x1C], ecx
        public_418280 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add eax, esi
        dec edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_418260
        public_41828d : nop
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        sub eax, edi
        mov word ptr ds : [edx], 0
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], eax
        public_4182ac : nop
        test ebp, ebp
        je public_4182b5
        mov byte ptr ss : [esp+0x12], 1
        public_4182b5 : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        mov byte ptr ss : [esp+0x13], 0
        je public_4181d2
        mov ebx, dword ptr ss : [esp+0x24]
        cmp ebx, dword ptr ss : [esp+0x2044]
        jge public_418381
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_5c71c8]
        mov ebp, dword ptr ss : [esp+0x2040]
        mov edi, eax
        mov eax, dword ptr ss : [ebp+ebx*8+4]
        lea esi, ds:[edi+1]
        add esp, 4
        cmp esi, eax
        jbe public_41835e
        mov eax, dword ptr ss : [ebp+ebx*8]
        test eax, eax
        je public_418344
        lea ecx, ds:[esi+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ss : [ebp+ebx*8], eax
        jmp public_41835a
        public_418315 : nop
        xor ebp, ebp
        jmp public_41831e
        public_418319 : nop
        mov ebp, 1
        public_41831e : nop
        mov bl, 1
        public_418320 : nop
        fadd dword ptr ss : [esp+0x18]
        inc edi
        test bl, bl
        fstp dword ptr ss : [esp+0x18]
        je public_4181e0
        jmp public_418244
        public_418336 : nop
        mov esi, 2
        fstp st(0)
        mov ebp, esi
        jmp public_418249
        public_418344 : nop
        lea edx, ds:[esi+esi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ss : [ebp+ebx*8], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_41835a : nop
        mov dword ptr ss : [ebp+ebx*8+4], esi
        public_41835e : nop
        mov ecx, dword ptr ss : [ebp+ebx*8]
        push edi
        lea eax, ss:[esp+0x30]
        push eax
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [ebp+ebx*8]
        add esp, 0xC
        inc ebx
        mov word ptr ds : [edx+edi*2], 0
        mov dword ptr ss : [esp+0x24], ebx
        public_418381 : nop
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        jg public_4181b5
        mov eax, dword ptr ss : [esp+0x2040]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0x201C
        ret 
        public_4183a5 : nop
        mov edx, dword ptr ss : [esp+0x2030]
        mov dword ptr ds : [edx], ecx
        add esp, 0x201C
        ret 
        UNREACHABLE_TRAP(0x418180)
    }
}

#undef public_4181b5
#undef public_4181d2
#undef public_4181e0
#undef public_418244
#undef public_418249
#undef public_418256
#undef public_418260
#undef public_418280
#undef public_41828d
#undef public_4182ac
#undef public_4182b5
#undef public_418315
#undef public_418319
#undef public_41831e
#undef public_418320
#undef public_418336
#undef public_418344
#undef public_41835a
#undef public_41835e
#undef public_418381
#undef public_4183a5
