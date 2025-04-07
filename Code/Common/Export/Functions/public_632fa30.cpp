#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_632f480);
CLANG_FORWARD_PROC_SYMBOL(public_632fa30);
CLANG_FORWARD_PROC_SYMBOL(public_6332050);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_632fa40 _public_632fa40
#define public_632fa76 _public_632fa76
#define public_632fa95 _public_632fa95
#define public_632fae0 _public_632fae0
#define public_632fafc _public_632fafc
#define public_632fb03 _public_632fb03
#define public_632fb08 _public_632fb08
#define public_632fb25 _public_632fb25
#define public_632fb31 _public_632fb31
#define public_632fb60 _public_632fb60
#define public_632fb94 _public_632fb94
#define public_632fbb1 _public_632fbb1
#define public_632fbb8 _public_632fbb8

PROC_DECLARE(0x632fa30, internal_632fa30, public_632fa30);
extern "C" NAKED register_t __cdecl internal_632fa30()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov ebp, ecx
        nop 
        lea esp, ss:[esp]
        public_632fa40 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x10]
        fld dword ptr ds : [esi+4]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+8]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi]
        faddp 
        fsub dword ptr ds : [esi+0xC]
        fcom 
        fnstsw ax
        test ah, 0x41
        jne public_632fa76
        fstp st(0)
        mov dword ptr ss : [esp+0x18], 1
        fstp st(0)
        jmp public_632fa95
        public_632fa76 : nop
        fxch 
        mov dword ptr ss : [esp+0x18], 2
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jnp public_632fa95
        mov dword ptr ss : [esp+0x18], 0
        public_632fa95 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [esi+eax*4+0x10]
        test ebx, ebx
        je public_632fb31
        mov ecx, ebx
        call public_62c4780
        fsubr qword ptr ds : [public_6399410]
        fabs 
        fcomp qword ptr ds : [public_63a4950]
        fnstsw ax
        test ah, 5
        jnp public_632fafc
        mov eax, dword ptr ds : [ebx+0xA8]
        test eax, eax
        je public_632fb03
        push 8
        lea edi, ds:[ebx+0x1C]
        push edi
        mov ecx, ebx
        call public_632f480
        mov esi, 8
        lea ecx, ds:[ecx]
        public_632fae0 : nop
        push edi
        push ebx
        mov ecx, ebp
        call public_632fa30
        mov dword ptr ds : [edi], 0
        mov edx, dword ptr ss : [ebp+8]
        dec edx
        add edi, 0x14
        dec esi
        mov dword ptr ss : [ebp+8], edx
        jne public_632fae0
        public_632fafc : nop
        mov esi, ebx
        jmp public_632fa40
        public_632fb03 : nop
        xor eax, eax
        lea ecx, ds:[ebx+0x1C]
        public_632fb08 : nop
        cmp dword ptr ds : [ecx], 0
        je public_632fb25
        inc eax
        add ecx, 0x14
        cmp eax, 8
        jb public_632fb08
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_632fb25 : nop
        lea ecx, ds:[eax+eax*4]
        lea edi, ds:[ebx+ecx*4+0x1C]
        jmp public_632fbb8
        public_632fb31 : nop
        mov al, byte ptr ds : [public_658e738]
        test al, 1
        jne public_632fb60
        mov dl, al
        or dl, 1
        xor eax, eax
        mov ecx, 0x2F
        mov edi, offset public_658e740
/*FIXUP push offset _public_62a8920 @0x632fb4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a8920
        mov byte ptr ds : [public_658e738], dl
        rep stosd
        call public_6391f9e
        add esp, 4
        public_632fb60 : nop
        mov edx, dword ptr ds : [public_640a73c]
/*FIXUP push offset public_658e740 @0x632fb66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658e740
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_640a728
        call public_6332050
        mov ecx, dword ptr ds : [public_640a73c]
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+0x18]
        add eax, 8
        mov dword ptr ds : [esi+edx*4+0x10], eax
        xor ecx, ecx
        lea edx, ds:[eax+0x1C]
        public_632fb94 : nop
        cmp dword ptr ds : [edx], 0
        je public_632fbb1
        inc ecx
        add edx, 0x14
        cmp ecx, 8
        jb public_632fb94
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_632fbb1 : nop
        lea ecx, ds:[ecx+ecx*4]
        lea edi, ds:[eax+ecx*4+0x1C]
        public_632fbb8 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, 5
        rep movsd
        mov eax, dword ptr ss : [ebp+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x632fa30)
    }
}

#undef public_632fa40
#undef public_632fa76
#undef public_632fa95
#undef public_632fae0
#undef public_632fafc
#undef public_632fb03
#undef public_632fb08
#undef public_632fb25
#undef public_632fb31
#undef public_632fb60
#undef public_632fb94
#undef public_632fbb1
#undef public_632fbb8
