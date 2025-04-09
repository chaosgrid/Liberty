#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43e210);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);

#define public_43e231 _public_43e231
#define public_43e255 _public_43e255
#define public_43e25b _public_43e25b
#define public_43e263 _public_43e263
#define public_43e26b _public_43e26b
#define public_43e271 _public_43e271
#define public_43e279 _public_43e279
#define public_43e2c0 _public_43e2c0
#define public_43e2cf _public_43e2cf
#define public_43e2f7 _public_43e2f7
#define public_43e380 _public_43e380
#define public_43e408 _public_43e408
#define public_43e454 _public_43e454
#define public_43e460 _public_43e460
#define public_43e46f _public_43e46f
#define public_43e473 _public_43e473
#define public_43e489 _public_43e489
#define public_43e4ac _public_43e4ac

PROC_DECLARE(0x43e210, internal_43e210, public_43e210);
extern "C" NAKED register_t __cdecl internal_43e210()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0x380]
        mov ecx, dword ptr ds : [edi]
        xor esi, esi
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        mov dl, 1
        mov dword ptr ss : [esp+0x14], esi
        je public_43e271
        public_43e231 : nop
        mov bl, byte ptr ds : [ecx+9]
        test bl, bl
        lea eax, ds:[ecx+8]
        je public_43e25b
        mov ebx, dword ptr ds : [eax+0x18]
        test byte ptr ds : [ebx+0x330], 0x40
        mov dword ptr ss : [esp+0x10], 0
        je public_43e255
        test dl, dl
        mov esi, eax
        jne public_43e263
        public_43e255 : nop
        mov dword ptr ss : [esp+0x14], eax
        xor dl, dl
        public_43e25b : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edi
        jne public_43e231
        jmp public_43e26b
        public_43e263 : nop
        mov dword ptr ss : [esp+0x10], 0xBC23D70A
        public_43e26b : nop
        cmp dword ptr ss : [esp+0x14], esi
        jne public_43e279
        public_43e271 : nop
        mov dword ptr ss : [esp+0x10], 0x3C23D70A
        public_43e279 : nop
        test esi, esi
        je public_43e4ac
        push 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        push 7
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ss : [ebp+0x380]
        mov eax, dword ptr ds : [ecx]
        xor esi, esi
        cmp eax, ecx
        je public_43e4ac
        nop 
        public_43e2c0 : nop
        mov dl, byte ptr ds : [eax+9]
        test dl, dl
        jne public_43e2cf
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        jne public_43e2cf
        inc esi
        public_43e2cf : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_43e2c0
        test esi, esi
        jle public_43e4ac
        cmp esi, 4
        jge public_43e4ac
        dec esi
        test esi, esi
        jle public_43e2f7
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x18]
        public_43e2f7 : nop
        mov edx, dword ptr ds : [esi*4+public_610bf0]
        mov ecx, dword ptr ss : [ebp+0x3DC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 4
        call dword ptr ds : [eax+0xA8]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+0x3DC]
        push 0
        lea edx, ss:[esp+0x40]
        push edx
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x48], 0x3E970A3D
        mov dword ptr ss : [esp+0x4C], 0xBF800000
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [public_5cb4d0]
        mov edi, dword ptr ds : [esi*4+public_610c10]
        lea ecx, ss:[ebp+0x32C]
        push eax
        call public_55e120
        mov ecx, dword ptr ds : [public_5cb4d4]
        mov eax, dword ptr ss : [ebp+0x380]
        mov dword ptr ss : [ebp+0x3D0], ecx
        mov ebx, dword ptr ds : [eax]
        xor ecx, ecx
        xor edx, edx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        je public_43e489
        public_43e380 : nop
        mov al, byte ptr ds : [ebx+9]
        test al, al
        lea esi, ds:[ebx+8]
        jne public_43e473
        cmp byte ptr ds : [esi], 0
        jne public_43e454
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        push 0
        je public_43e408
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ds : [edi]
        fadd dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x24]
        push edx
        fstp dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x30], ecx
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x18]
        fsub dword ptr ds : [public_5cb69c]
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        lea ecx, ss:[ebp+0x32C]
        fstp dword ptr ss : [esp+0x34]
        add edi, 4
        call public_55dee0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ds:[esi+0x24]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_43e454
        public_43e408 : nop
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        push eax
        fld dword ptr ss : [esp+0x24]
        push 6
        fsub dword ptr ds : [public_5cb69c]
        add edi, 4
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        lea ecx, ds:[esi+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        public_43e454 : nop
        mov eax, dword ptr ds : [esi+0x30]
        cmp eax, 6
        jne public_43e460
        mov dword ptr ss : [esp+0x10], esi
        public_43e460 : nop
        cmp eax, 5
        je public_43e46f
        cmp eax, 7
        je public_43e46f
        cmp eax, 8
        jne public_43e473
        public_43e46f : nop
        mov dword ptr ss : [esp+0x14], esi
        public_43e473 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ss : [ebp+0x380]
        jne public_43e380
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_43e489 : nop
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_43e4ac
        test ecx, ecx
        je public_43e4ac
        test edx, edx
        je public_43e4ac
        mov ecx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        add edx, 0x24
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        public_43e4ac : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x43e210)
    }
}

#undef public_43e231
#undef public_43e255
#undef public_43e25b
#undef public_43e263
#undef public_43e26b
#undef public_43e271
#undef public_43e279
#undef public_43e2c0
#undef public_43e2cf
#undef public_43e2f7
#undef public_43e380
#undef public_43e408
#undef public_43e454
#undef public_43e460
#undef public_43e46f
#undef public_43e473
#undef public_43e489
#undef public_43e4ac
