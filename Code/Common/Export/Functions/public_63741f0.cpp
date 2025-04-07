#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_63741f0);

#define public_6374232 _public_6374232
#define public_6374262 _public_6374262
#define public_6374283 _public_6374283
#define public_63742be _public_63742be
#define public_63742dc _public_63742dc
#define public_6374315 _public_6374315
#define public_6374321 _public_6374321
#define public_637432d _public_637432d
#define public_6374336 _public_6374336
#define public_6374339 _public_6374339
#define public_6374364 _public_6374364
#define public_6374373 _public_6374373
#define public_6374399 _public_6374399

PROC_DECLARE(0x63741f0, internal_63741f0, public_63741f0);
extern "C" NAKED register_t __cdecl internal_63741f0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b8f8]
        push ebx
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ss : [esp+8], ebp
        mov dword ptr ss : [esp+0xC], ebp
        je public_6374399
        mov ebx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ss : [esp+0x14], ebp
        call public_636ec10
        add esp, 4
        cmp eax, ebp
        mov dword ptr ss : [esp+0x18], eax
        jle public_6374399
        push esi
        push edi
        mov dword ptr ss : [esp+0x1C], 4
        public_6374232 : nop
        test ebx, ebx
        je public_6374373
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6374283
        mov esi, dword ptr ds : [eax+4]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x14], edi
        call public_636ec10
        mov ecx, eax
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        jle public_6374283
        mov eax, 4
        public_6374262 : nop
        test esi, esi
        je public_6374283
        cmp esi, 2
        je public_6374283
        cmp esi, 1
        je public_6374283
        mov edx, dword ptr ds : [ebx+0x3C]
        mov esi, dword ptr ds : [edx+eax+4]
        inc edi
        add eax, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        jl public_6374262
        public_6374283 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ss : [esp+0x10], eax
        je public_6374373
        mov ecx, dword ptr ds : [ebx+0x4C]
        mov edi, dword ptr ss : [esp+0x28]
        push ecx
        push ebp
        mov ebp, dword ptr ds : [public_63991e8]
/*FIXUP push offset public_63f1118 @0x63742a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1118
        push edi
        call ebp
        mov eax, dword ptr ds : [ebx+0x34]
        add esp, 0x10
        test eax, eax
        je public_63742dc
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_63742dc
        public_63742be : nop
        mov edx, dword ptr ds : [eax+0x14]
        and edx, 0xFFFFFF
        push edx
/*FIXUP push offset public_63f1110 @0x63742c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1110
        push edi
        call ebp
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_63742be
/*FIXUP public_63742dc : nop
        push offset public_63f1100 @0x63742dc*/
  FIXUP public_63742dc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f1100
        push edi
        call ebp
        mov eax, dword ptr ds : [ebx+0x3C]
        add esp, 8
        test eax, eax
        je public_6374364
        mov esi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        call public_636ec10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_6374364
        mov ebp, eax
        mov edi, 4
        mov dword ptr ss : [esp+0x10], ebp
        public_6374315 : nop
        cmp esi, 2
        jne public_6374321
        mov esi, 0xFFFFFFFD
        jmp public_6374339
        public_6374321 : nop
        cmp esi, 1
        jne public_637432d
        mov esi, 0xFFFFFFFE
        jmp public_6374339
        public_637432d : nop
        test esi, esi
        je public_6374336
        mov esi, dword ptr ds : [esi+0x4C]
        jmp public_6374339
        public_6374336 : nop
        or esi, 0xFFFFFFFF
        public_6374339 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push esi
/*FIXUP push offset public_63f10fc @0x637433e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f10fc
        push eax
        call dword ptr ds : [public_63991e8]
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov esi, dword ptr ds : [ecx+edi+4]
        add edi, 4
        add esp, 0xC
        dec ebp
        jne public_6374315
        mov ebp, dword ptr ds : [public_63991e8]
        mov edi, dword ptr ss : [esp+0x28]
/*FIXUP public_6374364 : nop
        push offset public_63edccc @0x6374364*/
  FIXUP public_6374364 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebp
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 8
        public_6374373 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_658b8f8]
        mov ebx, dword ptr ds : [eax+edx+4]
        add eax, 4
        inc ebp
        mov dword ptr ss : [esp+0x1C], eax
        cmp ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], ebp
        jl public_6374232
        pop edi
        pop esi
        public_6374399 : nop
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x63741f0)
    }
}

#undef public_6374232
#undef public_6374262
#undef public_6374283
#undef public_63742be
#undef public_63742dc
#undef public_6374315
#undef public_6374321
#undef public_637432d
#undef public_6374336
#undef public_6374339
#undef public_6374364
#undef public_6374373
#undef public_6374399
