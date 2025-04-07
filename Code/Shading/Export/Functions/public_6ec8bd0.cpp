#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8bd0);

#define public_6ec8c44 _public_6ec8c44
#define public_6ec8c68 _public_6ec8c68
#define public_6ec8c77 _public_6ec8c77
#define public_6ec8c7f _public_6ec8c7f
#define public_6ec8c90 _public_6ec8c90
#define public_6ec8ca4 _public_6ec8ca4
#define public_6ec8cac _public_6ec8cac
#define public_6ec8cb8 _public_6ec8cb8
#define public_6ec8cc4 _public_6ec8cc4
#define public_6ec8ccc _public_6ec8ccc
#define public_6ec8ce6 _public_6ec8ce6
#define public_6ec8cf2 _public_6ec8cf2
#define public_6ec8cfa _public_6ec8cfa
#define public_6ec8d21 _public_6ec8d21
#define public_6ec8d3d _public_6ec8d3d
#define public_6ec8d6a _public_6ec8d6a
#define public_6ec8d75 _public_6ec8d75
#define public_6ec8d85 _public_6ec8d85

PROC_DECLARE(0x6ec8bd0, internal_6ec8bd0, public_6ec8bd0);
extern "C" NAKED register_t __cdecl internal_6ec8bd0()
{
    __asm
    {
        sub esp, 0x414
        push ebx
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_6ed1008]
        lea edx, ss:[esp+8]
        push edx
        xor ebx, ebx
/*FIXUP push offset public_6ed48b4 @0x6ec8be9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        mov dword ptr ss : [esp+0x10], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ec8d75
        mov edx, dword ptr ds : [public_6ed4da4]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 3
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ec8d75
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 0x400
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_6ec8d6a
        push ebp
        push edi
        public_6ec8c44 : nop
        lea eax, ss:[esp+0x20]
        push 0x3D
        push eax
        call dword ptr ds : [public_6ed1048]
        add esp, 8
        cmp eax, ebx
        je public_6ec8d3d
        mov cl, byte ptr ss : [esp+0x20]
        cmp cl, bl
        lea edx, ss:[esp+0x20]
        je public_6ec8c7f
        public_6ec8c68 : nop
        cmp cl, 0x3B
        je public_6ec8c7f
        cmp cl, 0x20
        je public_6ec8c77
        cmp cl, 9
        jne public_6ec8c7f
        public_6ec8c77 : nop
        mov cl, byte ptr ds : [edx+1]
        inc edx
        cmp cl, bl
        jne public_6ec8c68
        public_6ec8c7f : nop
        mov cl, byte ptr ds : [eax]
        cmp cl, bl
        mov ebp, edx
        mov edx, eax
        je public_6ec8cac
        lea esp, ss:[esp]
        public_6ec8c90 : nop
        cmp cl, 0x3D
        je public_6ec8ca4
        cmp cl, 0x3B
        je public_6ec8ca4
        cmp cl, 0x20
        je public_6ec8ca4
        cmp cl, 9
        jne public_6ec8cac
        public_6ec8ca4 : nop
        mov cl, byte ptr ds : [edx-1]
        dec edx
        cmp cl, bl
        jne public_6ec8c90
        public_6ec8cac : nop
        mov byte ptr ds : [edx+1], bl
        lea edx, ds:[eax+1]
        mov al, byte ptr ds : [edx]
        cmp al, bl
        je public_6ec8ccc
        public_6ec8cb8 : nop
        cmp al, 0x3B
        je public_6ec8ccc
        cmp al, 0x20
        je public_6ec8cc4
        cmp al, 9
        jne public_6ec8ccc
        public_6ec8cc4 : nop
        mov al, byte ptr ds : [edx+1]
        inc edx
        cmp al, bl
        jne public_6ec8cb8
        public_6ec8ccc : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov al, byte ptr ds : [edx+ecx-1]
        cmp al, bl
        lea ecx, ds:[edx+ecx-1]
        mov esi, edx
        je public_6ec8cfa
        public_6ec8ce6 : nop
        cmp al, 0x3B
        je public_6ec8cf2
        cmp al, 0x20
        je public_6ec8cf2
        cmp al, 9
        jne public_6ec8cfa
        public_6ec8cf2 : nop
        mov al, byte ptr ds : [ecx-1]
        dec ecx
        cmp al, bl
        jne public_6ec8ce6
        public_6ec8cfa : nop
        mov edi, dword ptr ds : [public_6ed100c]
/*FIXUP push offset public_6ed4f44 @0x6ec8d00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f44
        push ebp
        mov byte ptr ds : [ecx+1], bl
        call edi
        add esp, 8
        test eax, eax
        jne public_6ec8d21
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push eax
        call dword ptr ds : [ecx+0x10]
        jmp public_6ec8d3d
/*FIXUP public_6ec8d21 : nop
        push offset public_6ed4f3c @0x6ec8d21*/
  FIXUP public_6ec8d21 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f3c
        push ebp
        call edi
        add esp, 8
        test eax, eax
        jne public_6ec8d3d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push esi
        push 2
        push eax
        call dword ptr ds : [edx+0x10]
        public_6ec8d3d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push 0x400
        lea esi, ss:[esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        inc ecx
        push ecx
        push esi
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6ec8c44
        pop edi
        pop ebp
        public_6ec8d6a : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6ec8d75 : nop
        mov eax, dword ptr ss : [esp+8]
        pop esi
        cmp eax, ebx
        pop ebx
        je public_6ec8d85
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ec8d85 : nop
        add esp, 0x414
        ret 
        UNREACHABLE_TRAP(0x6ec8bd0)
    }
}

#undef public_6ec8c44
#undef public_6ec8c68
#undef public_6ec8c77
#undef public_6ec8c7f
#undef public_6ec8c90
#undef public_6ec8ca4
#undef public_6ec8cac
#undef public_6ec8cb8
#undef public_6ec8cc4
#undef public_6ec8ccc
#undef public_6ec8ce6
#undef public_6ec8cf2
#undef public_6ec8cfa
#undef public_6ec8d21
#undef public_6ec8d3d
#undef public_6ec8d6a
#undef public_6ec8d75
#undef public_6ec8d85
