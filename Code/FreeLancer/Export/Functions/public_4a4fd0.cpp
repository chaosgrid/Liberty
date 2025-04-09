#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a630);
CLANG_FORWARD_PROC_SYMBOL(public_4a4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcbeb);

#define public_4a5012 _public_4a5012
#define public_4a501b _public_4a501b
#define public_4a501d _public_4a501d
#define public_4a5024 _public_4a5024
#define public_4a5062 _public_4a5062
#define public_4a50a0 _public_4a50a0
#define public_4a50b0 _public_4a50b0
#define public_4a50c0 _public_4a50c0
#define public_4a50cd _public_4a50cd
#define public_4a50cf _public_4a50cf
#define public_4a50da _public_4a50da
#define public_4a50dd _public_4a50dd
#define public_4a50ff _public_4a50ff
#define public_4a5108 _public_4a5108
#define public_4a5114 _public_4a5114
#define public_4a5120 _public_4a5120
#define public_4a512d _public_4a512d
#define public_4a512f _public_4a512f
#define public_4a513a _public_4a513a
#define public_4a513d _public_4a513d
#define public_4a515e _public_4a515e
#define public_4a5167 _public_4a5167
#define public_4a5173 _public_4a5173
#define public_4a5180 _public_4a5180
#define public_4a518d _public_4a518d
#define public_4a518f _public_4a518f
#define public_4a519a _public_4a519a
#define public_4a519d _public_4a519d
#define public_4a51bf _public_4a51bf
#define public_4a51c8 _public_4a51c8
#define public_4a51d4 _public_4a51d4
#define public_4a51e0 _public_4a51e0
#define public_4a51ed _public_4a51ed
#define public_4a51ef _public_4a51ef
#define public_4a51fa _public_4a51fa
#define public_4a51fd _public_4a51fd
#define public_4a5217 _public_4a5217
#define public_4a5220 _public_4a5220

PROC_DECLARE(0x4a4fd0, internal_4a4fd0, public_4a4fd0);
extern "C" NAKED register_t __cdecl internal_4a4fd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcbeb @0x4a4fd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcbeb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov eax, dword ptr ds : [public_66873c]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push eax
        mov ecx, offset public_668708
        mov dword ptr ss : [esp+0x18], ebx
        call public_43a630
        mov ecx, eax
        xor edi, edi
        xor esi, esi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], edi
        xor eax, eax
        public_4a5012 : nop
        cmp eax, esi
        jne public_4a501b
        mov eax, dword ptr ds : [ecx+4]
        jmp public_4a501d
        public_4a501b : nop
        mov eax, dword ptr ds : [eax]
        public_4a501d : nop
        cmp eax, esi
        je public_4a5024
        inc edi
        jmp public_4a5012
        public_4a5024 : nop
        lea eax, ds:[edi+edi*2]
        shl eax, 5
        add eax, 4
        push eax
        mov dword ptr ss : [esp+0x14], edi
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], esi
        je public_4a5062
        mov ecx, dword ptr ds : [public_5c6148]
        mov edx, dword ptr ds : [public_5c6150]
        push ecx
        push edx
        push edi
        lea esi, ds:[eax+4]
        push 0x60
        push esi
        mov dword ptr ds : [eax], edi
        call public_5b7fba
        public_4a5062 : nop
        push edi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ds : [ebx+0x584], esi
        mov dword ptr ds : [ebx+0x588], edi
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov ebp, eax
        jle public_4a50a0
        mov ecx, edi
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        mov edi, ebp
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        lea esp, ss:[esp]
        public_4a50a0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        xor esi, esi
        test eax, eax
        jle public_4a5108
        xor edi, edi
        mov edi, edi
        public_4a50b0 : nop
        cmp byte ptr ds : [esi+ebp], 0
        jne public_4a50ff
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        lea esp, ss:[esp]
        public_4a50c0 : nop
        test eax, eax
        jne public_4a50cd
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4a50cf
        public_4a50cd : nop
        mov eax, dword ptr ds : [eax]
        public_4a50cf : nop
        test eax, eax
        je public_4a50dd
        cmp edx, esi
        je public_4a50da
        inc edx
        jmp public_4a50c0
        public_4a50da : nop
        mov ecx, dword ptr ds : [eax+8]
        public_4a50dd : nop
        mov al, byte ptr ds : [ecx+9]
        test al, al
        je public_4a50ff
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x584]
        add ecx, edi
        call dword ptr ds : [public_5c6174]
        inc ebx
        mov byte ptr ds : [esi+ebp], 1
        add edi, 0x60
        public_4a50ff : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, eax
        jl public_4a50b0
        public_4a5108 : nop
        xor esi, esi
        test eax, eax
        jle public_4a5167
        lea edi, ds:[ebx+ebx*2]
        shl edi, 5
        public_4a5114 : nop
        cmp byte ptr ds : [esi+ebp], 0
        jne public_4a515e
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        public_4a5120 : nop
        test eax, eax
        jne public_4a512d
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4a512f
        public_4a512d : nop
        mov eax, dword ptr ds : [eax]
        public_4a512f : nop
        test eax, eax
        je public_4a513d
        cmp edx, esi
        je public_4a513a
        inc edx
        jmp public_4a5120
        public_4a513a : nop
        mov ecx, dword ptr ds : [eax+8]
        public_4a513d : nop
        cmp dword ptr ds : [ecx+0xC], 1
        jne public_4a515e
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x584]
        add ecx, edi
        call dword ptr ds : [public_5c6174]
        inc ebx
        mov byte ptr ds : [esi+ebp], 1
        add edi, 0x60
        public_4a515e : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, eax
        jl public_4a5114
        public_4a5167 : nop
        xor esi, esi
        test eax, eax
        jle public_4a51c8
        lea edi, ds:[ebx+ebx*2]
        shl edi, 5
        public_4a5173 : nop
        cmp byte ptr ds : [esi+ebp], 0
        jne public_4a51bf
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        nop 
        public_4a5180 : nop
        test eax, eax
        jne public_4a518d
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4a518f
        public_4a518d : nop
        mov eax, dword ptr ds : [eax]
        public_4a518f : nop
        test eax, eax
        je public_4a519d
        cmp edx, esi
        je public_4a519a
        inc edx
        jmp public_4a5180
        public_4a519a : nop
        mov ecx, dword ptr ds : [eax+8]
        public_4a519d : nop
        mov al, byte ptr ds : [ecx+8]
        test al, al
        je public_4a51bf
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x584]
        add ecx, edi
        call dword ptr ds : [public_5c6174]
        inc ebx
        mov byte ptr ds : [esi+ebp], 1
        add edi, 0x60
        public_4a51bf : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, eax
        jl public_4a5173
        public_4a51c8 : nop
        xor esi, esi
        test eax, eax
        jle public_4a5220
        lea edi, ds:[ebx+ebx*2]
        shl edi, 5
        public_4a51d4 : nop
        cmp byte ptr ds : [esi+ebp], 0
        jne public_4a5217
        xor ecx, ecx
        xor edx, edx
        xor eax, eax
        public_4a51e0 : nop
        test eax, eax
        jne public_4a51ed
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4a51ef
        public_4a51ed : nop
        mov eax, dword ptr ds : [eax]
        public_4a51ef : nop
        test eax, eax
        je public_4a51fd
        cmp edx, esi
        je public_4a51fa
        inc edx
        jmp public_4a51e0
        public_4a51fa : nop
        mov ecx, dword ptr ds : [eax+8]
        public_4a51fd : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x584]
        add ecx, edi
        call dword ptr ds : [public_5c6174]
        mov byte ptr ds : [esi+ebp], 1
        add edi, 0x60
        public_4a5217 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        cmp esi, eax
        jl public_4a51d4
        public_4a5220 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x648]
        xor edx, edx
        mov dword ptr ds : [eax+0x578], edx
        mov dword ptr ds : [eax+0x57C], edx
        mov dword ptr ds : [eax+0x580], edx
        mov eax, dword ptr ds : [eax+0x588]
        mov esi, dword ptr ds : [ecx]
        dec eax
        push eax
        push edx
        push 0x37
        call dword ptr ds : [esi+0xA8]
        push ebp
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x4a4fd0)
    }
}

#undef public_4a5012
#undef public_4a501b
#undef public_4a501d
#undef public_4a5024
#undef public_4a5062
#undef public_4a50a0
#undef public_4a50b0
#undef public_4a50c0
#undef public_4a50cd
#undef public_4a50cf
#undef public_4a50da
#undef public_4a50dd
#undef public_4a50ff
#undef public_4a5108
#undef public_4a5114
#undef public_4a5120
#undef public_4a512d
#undef public_4a512f
#undef public_4a513a
#undef public_4a513d
#undef public_4a515e
#undef public_4a5167
#undef public_4a5173
#undef public_4a5180
#undef public_4a518d
#undef public_4a518f
#undef public_4a519a
#undef public_4a519d
#undef public_4a51bf
#undef public_4a51c8
#undef public_4a51d4
#undef public_4a51e0
#undef public_4a51ed
#undef public_4a51ef
#undef public_4a51fa
#undef public_4a51fd
#undef public_4a5217
#undef public_4a5220
