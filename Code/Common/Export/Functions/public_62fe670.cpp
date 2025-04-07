#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a66b0);
CLANG_FORWARD_PROC_SYMBOL(public_62c29f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d21d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5760);
CLANG_FORWARD_PROC_SYMBOL(public_62d5840);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a10);
CLANG_FORWARD_PROC_SYMBOL(public_62d7510);
CLANG_FORWARD_PROC_SYMBOL(public_62d7560);
CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);
CLANG_FORWARD_PROC_SYMBOL(public_62da380);
CLANG_FORWARD_PROC_SYMBOL(public_62da400);
CLANG_FORWARD_PROC_SYMBOL(public_62da410);
CLANG_FORWARD_PROC_SYMBOL(public_62e5b70);
CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6332c60);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62fe6c4 _public_62fe6c4
#define public_62fe76b _public_62fe76b
#define public_62fe79d _public_62fe79d
#define public_62fe7bb _public_62fe7bb
#define public_62fe7bd _public_62fe7bd
#define public_62fe7c9 _public_62fe7c9
#define public_62fe7e5 _public_62fe7e5
#define public_62fe7e7 _public_62fe7e7
#define public_62fe7fa _public_62fe7fa
#define public_62fe7fc _public_62fe7fc
#define public_62fe808 _public_62fe808
#define public_62fe84a _public_62fe84a
#define public_62fe863 _public_62fe863
#define public_62fe890 _public_62fe890
#define public_62fe899 _public_62fe899
#define public_62fe901 _public_62fe901

PROC_DECLARE(0x62fe670, internal_62fe670, public_62fe670);
extern "C" NAKED register_t __cdecl internal_62fe670()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x28]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        and al, 0xFE
        lea edi, ds:[ebx+0x38C]
        mov ecx, 0x1C
        mov esi, ebp
        rep movsd
        mov byte ptr ds : [ebx+0x28], al
        mov cl, al
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx+0x2F4], eax
        sub eax, 0
        je public_62fe79d
        dec eax
        je public_62fe76b
        dec eax
        je public_62fe6c4
        pop edi
        pop esi
        and cl, 0xFD
        pop ebp
        mov byte ptr ds : [ebx+0x28], cl
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_62fe6c4 : nop
        lea edi, ds:[ebx+0x318]
        lea eax, ss:[ebp+0x38]
        mov edx, dword ptr ds : [eax]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[ebp+0x20]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ebx+0x324]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea edx, ss:[ebp+0x2C]
        mov ecx, dword ptr ds : [edx]
        lea esi, ds:[ebx+0x330]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        lea eax, ss:[ebp+0x44]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x33C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, edi
        call public_6332c60
        lea ecx, ds:[ebx+0x164]
        push edi
        call public_62da380
        xor ecx, ecx
        mov cl, byte ptr ss : [ebp+0x5A]
        push ecx
        lea ecx, ds:[ebx+0x164]
        call public_62da410
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ds:[ebx+0x2F8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        jmp public_62fe808
        public_62fe76b : nop
        lea esi, ds:[ebx+0x304]
        lea ecx, ss:[ebp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        push esi
        lea ecx, ds:[ebx+0x2C]
        call public_62d5840
        push esi
        lea ecx, ds:[ebx+0xA4]
        call public_62d7560
        jmp public_62fe808
        public_62fe79d : nop
        mov ecx, dword ptr ds : [ebx+0x24]
        lea edx, ss:[ebp+0x1C]
        push edx
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        lea esi, ds:[ebx+0x310]
        je public_62fe7bb
        add eax, 8
        jmp public_62fe7bd
        public_62fe7bb : nop
        xor eax, eax
        public_62fe7bd : nop
        cmp eax, dword ptr ds : [esi]
        je public_62fe7c9
        push eax
        mov ecx, esi
        call public_6341610
        public_62fe7c9 : nop
        mov eax, dword ptr ds : [ebx+0x358]
        lea edi, ds:[ebx+0x2C]
        push eax
        mov ecx, edi
        call public_62a66b0
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62fe7e5
        add eax, 0xFFFFFFF8
        jmp public_62fe7e7
        public_62fe7e5 : nop
        xor eax, eax
        public_62fe7e7 : nop
        push eax
        mov ecx, edi
        call public_62d5760
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62fe7fa
        lea eax, ds:[esi-8]
        jmp public_62fe7fc
        public_62fe7fa : nop
        xor eax, eax
        public_62fe7fc : nop
        push eax
        lea ecx, ds:[ebx+0xA4]
        call public_62d7510
        public_62fe808 : nop
        fld dword ptr ss : [ebp+0x50]
        lea esi, ds:[ebx+0x2C]
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [ebx+0x358]
        push ecx
        mov ecx, esi
        call public_62a66b0
        fld dword ptr ss : [ebp+0x54]
        fst dword ptr ss : [esp+0x1C]
        fst dword ptr ds : [ebx+0x35C]
        fcomp qword ptr ds : [public_639f418]
        fnstsw ax
        test ah, 0x41
        jp public_62fe84a
        mov dword ptr ds : [ebx+0x360], 0x3F800000
        jmp public_62fe863
        public_62fe84a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx+0x14]
        push 1
        push edx
        push eax
        call public_62e5b70
        fstp dword ptr ds : [ebx+0x360]
        add esp, 0xC
        public_62fe863 : nop
        xor eax, eax
        mov al, byte ptr ss : [ebp+0x59]
        mov ecx, esi
        mov byte ptr ds : [ebx+0x367], al
        push eax
        call public_62d5a10
        mov al, byte ptr ss : [ebp+0x58]
        test al, al
        mov byte ptr ds : [ebx+0x366], al
        mov ecx, esi
        je public_62fe890
        push 2
        call public_62d88b0
        push 2
        jmp public_62fe899
        public_62fe890 : nop
        push 0
        call public_62d88b0
        push 0
        public_62fe899 : nop
        lea ecx, ds:[ebx+0x164]
        call public_62da400
        mov al, byte ptr ss : [ebp+0x6C]
        test al, al
        sete cl
        push 3
        push ecx
        mov ecx, ebx
        call public_62d21d0
        mov dl, byte ptr ss : [ebp+0x5A]
        mov byte ptr ds : [ebx+0x36A], dl
        mov al, byte ptr ss : [ebp+0x5B]
        mov byte ptr ds : [ebx+0x36B], al
        mov edx, dword ptr ss : [ebp+0x5C]
        xor eax, eax
        test edx, edx
        lea ecx, ss:[ebp+0x5C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_62fe901
        push ecx
        mov ecx, dword ptr ds : [ebx+0x24]
        add ecx, 0x34
        call public_62e74a0
        mov ecx, dword ptr ss : [ebp+0x60]
        mov edx, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [ebp+0x68]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x1C], ecx
        public_62fe901 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ds : [ebx+0x24]
        push eax
        lea ecx, ds:[ebx+0x370]
        call public_62c29f0
        mov al, byte ptr ds : [ebx+0x28]
        pop edi
        pop esi
        or al, 2
        mov byte ptr ds : [ebx+0x28], al
        pop ebp
        mov byte ptr ds : [ebx+0x2EA], 0
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x62fe670)
    }
}

#undef public_62fe6c4
#undef public_62fe76b
#undef public_62fe79d
#undef public_62fe7bb
#undef public_62fe7bd
#undef public_62fe7c9
#undef public_62fe7e5
#undef public_62fe7e7
#undef public_62fe7fa
#undef public_62fe7fc
#undef public_62fe808
#undef public_62fe84a
#undef public_62fe863
#undef public_62fe890
#undef public_62fe899
#undef public_62fe901
