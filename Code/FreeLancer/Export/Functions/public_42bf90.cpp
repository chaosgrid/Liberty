#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42adb0);
CLANG_FORWARD_PROC_SYMBOL(public_42b7b0);
CLANG_FORWARD_PROC_SYMBOL(public_42bf90);
CLANG_FORWARD_PROC_SYMBOL(public_42c300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_42bfad _public_42bfad
#define public_42bfe9 _public_42bfe9
#define public_42c024 _public_42c024
#define public_42c051 _public_42c051
#define public_42c0b5 _public_42c0b5
#define public_42c0b9 _public_42c0b9
#define public_42c0bb _public_42c0bb
#define public_42c0d0 _public_42c0d0
#define public_42c0e2 _public_42c0e2
#define public_42c0e5 _public_42c0e5
#define public_42c0e8 _public_42c0e8

PROC_DECLARE(0x42bf90, internal_42bf90, public_42bf90);
extern "C" NAKED register_t __cdecl internal_42bf90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [edi+0x24]
        or ecx, 0x20000000
        test eax, eax
        mov dword ptr ds : [edi+0x18], ecx
        jne public_42bfad
        mov dword ptr ds : [edi+0x24], edi
        public_42bfad : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        jle public_42c0b9
        mov ebx, dword ptr ds : [public_5c6040]
        lea esi, ds:[edi+eax*4+0x18]
        mov ecx, esi
        call ebx
        test al, al
        jne public_42c0b9
        mov eax, dword ptr ds : [esi]
        cmp eax, dword ptr ds : [edi+4]
        je public_42c0b9
        cmp eax, dword ptr ds : [public_667cd4]
        jne public_42bfe9
        xor ebx, ebx
        jmp public_42c0bb
        public_42bfe9 : nop
        mov ecx, esi
        call ebx
        test al, al
        jne public_42c0b5
        mov cl, byte ptr ds : [public_67edc0]
        mov ebx, dword ptr ds : [esi]
        mov al, 1
        test al, cl
        jne public_42c024
        mov dl, cl
        or dl, al
        mov ecx, offset public_67ede0
        mov byte ptr ds : [public_67edc0], dl
        call public_42b7b0
/*FIXUP push offset _public_42adb0 @0x42c017*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_42adb0
        call public_5b7e6c
        add esp, 4
/*FIXUP public_42c024 : nop
        push offset public_67ede0 @0x42c024*/
  FIXUP public_42c024 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67ede0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_667cc0
        mov dword ptr ds : [public_67ede4], ebx
        call public_42c300
        mov ebx, dword ptr ss : [esp+0x10]
        cmp ebx, dword ptr ds : [public_667cc4]
        je public_42c0b5
        add ebx, 0xC
        test ebx, ebx
        jne public_42c0bb
        public_42c051 : nop
        mov ecx, esi
        mov ebp, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x168
/*FIXUP push offset public_5ca3dc @0x42c06a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca3a8 @0x42c06f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3a8
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x14
        test ebx, ebx
        jne public_42c0bb
        mov ecx, esi
        mov esi, dword ptr ds : [public_5c6044]
        mov ebp, 0x100001
        call esi
        mov edx, dword ptr ss : [esp+0x18]
        push eax
        push edx
        lea ecx, ds:[edi+4]
        call esi
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x3CB
/*FIXUP push offset public_5ca3dc @0x42c0a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca3dc
/*FIXUP push offset public_5ca740 @0x42c0a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca740
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x1C
        jmp public_42c0bb
        public_42c0b5 : nop
        xor ebx, ebx
        jmp public_42c051
        public_42c0b9 : nop
        mov ebx, edi
        public_42c0bb : nop
        cmp ebx, dword ptr ds : [edi+0x24]
        je public_42c0e8
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        jle public_42c0e5
        mov esi, eax
        lea ecx, ds:[ecx]
        public_42c0d0 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        test ebx, ebx
        je public_42c0e2
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        public_42c0e2 : nop
        dec esi
        jne public_42c0d0
        public_42c0e5 : nop
        mov dword ptr ds : [edi+0x24], ebx
        public_42c0e8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x42bf90)
    }
}

#undef public_42bfad
#undef public_42bfe9
#undef public_42c024
#undef public_42c051
#undef public_42c0b5
#undef public_42c0b9
#undef public_42c0bb
#undef public_42c0d0
#undef public_42c0e2
#undef public_42c0e5
#undef public_42c0e8
