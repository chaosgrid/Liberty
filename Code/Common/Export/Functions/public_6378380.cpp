#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6378380);

#define public_63783ab _public_63783ab
#define public_63783b4 _public_63783b4
#define public_63783bb _public_63783bb
#define public_63783c9 _public_63783c9
#define public_6378460 _public_6378460
#define public_637846b _public_637846b
#define public_637847a _public_637847a
#define public_6378481 _public_6378481
#define public_63784a0 _public_63784a0
#define public_63784ac _public_63784ac

PROC_DECLARE(0x6378380, internal_6378380, public_6378380);
extern "C" NAKED register_t __cdecl internal_6378380()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        xor esi, esi
        test ebp, ebp
        je public_63784ac
        mov eax, dword ptr ds : [public_658b968]
        test eax, eax
        push edi
        jle public_63783c9
        mov edx, dword ptr ds : [public_658b97c]
        mov edi, dword ptr ds : [public_658b978]
        push ebx
        sub edi, edx
        mov ebx, eax
        public_63783ab : nop
        mov eax, dword ptr ds : [edi+edx]
        xor ecx, ecx
        test eax, eax
        je public_63783bb
        public_63783b4 : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_63783b4
        public_63783bb : nop
        mov eax, dword ptr ds : [edx]
        imul eax, ecx
        add esi, eax
        add edx, 4
        dec ebx
        jne public_63783ab
        pop ebx
        public_63783c9 : nop
        mov ecx, dword ptr ds : [public_658b964]
        mov edx, dword ptr ds : [public_658b960]
        mov eax, dword ptr ds : [public_658b9a4]
        mov edi, dword ptr ds : [public_658b98c]
        push ecx
        mov ecx, dword ptr ds : [public_658b9b0]
        push edx
        mov edx, eax
        sub edx, ecx
        push edx
        mov edx, dword ptr ds : [public_658b9b8]
        push edx
        mov edx, dword ptr ds : [public_658b9bc]
        push edx
        mov edx, dword ptr ds : [public_658b9b4]
        push esi
        sub edx, edi
        mov edi, dword ptr ds : [public_63991e8]
        sub edx, esi
        push edx
        mov edx, dword ptr ds : [public_658b9a0]
        push ecx
        mov ecx, dword ptr ds : [public_658b9ac]
        push ecx
        push eax
        mov eax, dword ptr ds : [public_658b99c]
        push edx
        push eax
/*FIXUP push offset public_63f310c @0x6378423*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f310c
        push ebp
        call edi
        mov eax, dword ptr ds : [public_658b9c0]
        add esp, 0x38
        test eax, eax
        je public_6378460
        fild dword ptr ds : [public_658b9c4]
        sub esp, 8
        fidiv dword ptr ds : [public_658b9c0]
        fstp qword ptr ss : [esp]
        push eax
/*FIXUP push offset public_63f30d4 @0x637844a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f30d4
        push ebp
        call edi
        add esp, 0x14
/*FIXUP push offset public_63f30b8 @0x6378455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f30b8
        push ebp
        call edi
        add esp, 8
        public_6378460 : nop
        mov eax, dword ptr ds : [public_658b968]
        xor esi, esi
        test eax, eax
        jle public_63784a0
        public_637846b : nop
        mov edx, dword ptr ds : [public_658b978]
        mov eax, dword ptr ds : [edx+esi*4]
        xor ecx, ecx
        test eax, eax
        je public_6378481
        public_637847a : nop
        mov eax, dword ptr ds : [eax]
        inc ecx
        test eax, eax
        jne public_637847a
        public_6378481 : nop
        mov eax, dword ptr ds : [public_658b97c]
        push ecx
        mov ecx, dword ptr ds : [eax+esi*4]
        push ecx
/*FIXUP push offset public_63f30b0 @0x637848b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f30b0
        push ebp
        call edi
        mov eax, dword ptr ds : [public_658b968]
        add esp, 0x10
        inc esi
        cmp esi, eax
        jl public_637846b
/*FIXUP public_63784a0 : nop
        push offset public_63ee778 @0x63784a0*/
  FIXUP public_63784a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee778
        push ebp
        call edi
        add esp, 8
        pop edi
        public_63784ac : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6378380)
    }
}

#undef public_63783ab
#undef public_63783b4
#undef public_63783bb
#undef public_63783c9
#undef public_6378460
#undef public_637846b
#undef public_637847a
#undef public_6378481
#undef public_63784a0
#undef public_63784ac
