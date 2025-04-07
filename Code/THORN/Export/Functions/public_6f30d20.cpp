#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);
CLANG_FORWARD_PROC_SYMBOL(public_6f31030);
CLANG_FORWARD_PROC_SYMBOL(public_6f310a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f310d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f34);
CLANG_FORWARD_PROC_SYMBOL(public_6f58028);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58821);

#define public_6f30da7 _public_6f30da7
#define public_6f30dd9 _public_6f30dd9
#define public_6f30df0 _public_6f30df0
#define public_6f30e30 _public_6f30e30
#define public_6f30e63 _public_6f30e63
#define public_6f30e66 _public_6f30e66
#define public_6f30e6a _public_6f30e6a
#define public_6f30e7e _public_6f30e7e
#define public_6f30e94 _public_6f30e94
#define public_6f30ebc _public_6f30ebc
#define public_6f30f00 _public_6f30f00
#define public_6f30f33 _public_6f30f33
#define public_6f30f39 _public_6f30f39
#define public_6f30f3d _public_6f30f3d
#define public_6f30f55 _public_6f30f55
#define public_6f30f79 _public_6f30f79
#define public_6f30f97 _public_6f30f97
#define public_6f30fb0 _public_6f30fb0
#define public_6f30fbe _public_6f30fbe
#define public_6f30fe4 _public_6f30fe4

PROC_DECLARE(0x6f30d20, internal_6f30d20, public_6f30d20);
extern "C" NAKED register_t __cdecl internal_6f30d20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58821 @0x6f30d22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58821
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE8
        push ebp
        mov ebp, ecx
        cmp dword ptr ss : [ebp+8], 2
        mov dword ptr ss : [esp+0x24], ebp
        jb public_6f30fe4
        mov al, byte ptr ss : [ebp]
        push ebx
        push esi
        push 0x1C
        mov byte ptr ss : [esp+0x10], al
        call public_6f57e9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        xor ebx, ebx
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ebx
/*FIXUP push offset _public_6f30cd0 @0x6f30d6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f30cd0
/*FIXUP push offset _public_6f31030 @0x6f30d73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f31030
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x44]
        push ecx
        mov dword ptr ss : [esp+0x110], ebx
        call public_6f58028
        cmp dword ptr ss : [ebp+8], ebx
        mov byte ptr ss : [esp+0xFC], 1
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f30fbe
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        public_6f30da7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edx]
        cmp edx, ecx
        je public_6f30dd9
        mov esi, dword ptr ds : [ecx]
        cmp edx, esi
        je public_6f30dd9
        push esi
        push ecx
        push ebp
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f31610
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [ebp+8]
        inc eax
        dec ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [ebp+8], ecx
        public_6f30dd9 : nop
        xor edi, edi
        test ebx, ebx
        mov dword ptr ss : [esp+0x2C], edi
        jbe public_6f30f79
        lea esi, ss:[esp+0x3C]
        nop 
        lea esp, ss:[esp]
        public_6f30df0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6f30ebc
        lea ecx, ds:[esi-4]
        lea edx, ss:[esp+0x10]
        cmp edx, ecx
        je public_6f30e94
        mov ebx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6f31000
        cmp ebp, ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], edx
        je public_6f30e6a
        lea esp, ss:[esp]
        public_6f30e30 : nop
        cmp ecx, edx
        je public_6f30e7e
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [ebp+8]
        fnstsw ax
        test ah, 5
        jp public_6f30e63
        mov edi, dword ptr ds : [ecx]
        push edi
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebp
        lea ecx, ds:[esi-4]
        call public_6f31610
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x28], ecx
        jmp public_6f30e66
        public_6f30e63 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6f30e66 : nop
        cmp ebp, ebx
        jne public_6f30e30
        public_6f30e6a : nop
        cmp ecx, edx
        je public_6f30e7e
        push edx
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea ecx, ds:[esi-4]
        call public_6f31610
        public_6f30e7e : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        add ecx, eax
        mov dword ptr ds : [esi+4], ecx
        xor eax, eax
        public_6f30e94 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        inc edi
        mov eax, ecx
        add esi, 0xC
        cmp edi, ebx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x2C], edi
        jb public_6f30df0
        public_6f30ebc : nop
        cmp edi, 0xF
        jne public_6f30f79
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_6f31000
        mov ebx, dword ptr ss : [esp+0xF0]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_6f31000
        mov edx, dword ptr ss : [esp+0x24]
        cmp edx, ebx
        mov ebp, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        je public_6f30f3d
        nop 
        lea esp, ss:[esp]
        public_6f30f00 : nop
        cmp ecx, ebp
        je public_6f30f55
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 5
        jp public_6f30f33
        mov esi, dword ptr ds : [ecx]
        push esi
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        push edx
        lea ecx, ss:[esp+0xFC]
        call public_6f31610
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_6f30f39
        public_6f30f33 : nop
        mov edx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], edx
        public_6f30f39 : nop
        cmp edx, ebx
        jne public_6f30f00
        public_6f30f3d : nop
        cmp ecx, ebp
        je public_6f30f55
        push ebp
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0xFC]
        call public_6f31610
        public_6f30f55 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF4]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x30]
        add eax, edx
        mov dword ptr ss : [esp+0xF4], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f30f97
        public_6f30f79 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[edi+edi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x3C]
        call public_6f310a0
        cmp edi, ebx
        mov eax, dword ptr ss : [esp+0x18]
        jne public_6f30f97
        inc ebx
        mov dword ptr ss : [esp+0x20], ebx
        public_6f30f97 : nop
        mov ecx, dword ptr ss : [ebp+8]
        test ecx, ecx
        jne public_6f30da7
        test ebx, ebx
        pop edi
        jbe public_6f30fbe
        lea edx, ds:[ebx+ebx*2]
        lea esi, ss:[esp+edx*4+0x34]
        mov edi, edi
        public_6f30fb0 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebp
        call public_6f310d0
        dec ebx
        jne public_6f30fb0
/*FIXUP public_6f30fbe : nop
        push offset _public_6f30cd0 @0x6f30fbe*/
  FIXUP public_6f30fbe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f30cd0
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x40]
        push eax
        mov byte ptr ss : [esp+0x10C], 0
        call public_6f57f34
        lea ecx, ss:[esp+0xC]
        call public_6f30cd0
        pop esi
        pop ebx
        public_6f30fe4 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0xF4
        ret 
        UNREACHABLE_TRAP(0x6f30d20)
    }
}

#undef public_6f30da7
#undef public_6f30dd9
#undef public_6f30df0
#undef public_6f30e30
#undef public_6f30e63
#undef public_6f30e66
#undef public_6f30e6a
#undef public_6f30e7e
#undef public_6f30e94
#undef public_6f30ebc
#undef public_6f30f00
#undef public_6f30f33
#undef public_6f30f39
#undef public_6f30f3d
#undef public_6f30f55
#undef public_6f30f79
#undef public_6f30f97
#undef public_6f30fb0
#undef public_6f30fbe
#undef public_6f30fe4
