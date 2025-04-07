#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5ec0);
CLANG_FORWARD_PROC_SYMBOL(public_65f6620);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f5ee4 _public_65f5ee4
#define public_65f5f02 _public_65f5f02
#define public_65f5f0d _public_65f5f0d
#define public_65f5f16 _public_65f5f16
#define public_65f5f21 _public_65f5f21
#define public_65f5f3d _public_65f5f3d
#define public_65f5f54 _public_65f5f54
#define public_65f5f61 _public_65f5f61
#define public_65f5f6c _public_65f5f6c
#define public_65f5f6f _public_65f5f6f
#define public_65f5f87 _public_65f5f87
#define public_65f5f92 _public_65f5f92
#define public_65f5f95 _public_65f5f95
#define public_65f5faa _public_65f5faa
#define public_65f5fb5 _public_65f5fb5
#define public_65f5fc0 _public_65f5fc0
#define public_65f5fc3 _public_65f5fc3
#define public_65f5fd7 _public_65f5fd7
#define public_65f5fe3 _public_65f5fe3
#define public_65f5fef _public_65f5fef
#define public_65f5ff2 _public_65f5ff2
#define public_65f6010 _public_65f6010
#define public_65f604f _public_65f604f
#define public_65f6062 _public_65f6062
#define public_65f606d _public_65f606d
#define public_65f6070 _public_65f6070
#define public_65f607b _public_65f607b
#define public_65f608e _public_65f608e
#define public_65f60b5 _public_65f60b5
#define public_65f60cf _public_65f60cf
#define public_65f60f5 _public_65f60f5
#define public_65f6108 _public_65f6108
#define public_65f6115 _public_65f6115
#define public_65f6117 _public_65f6117
#define public_65f6122 _public_65f6122
#define public_65f6139 _public_65f6139
#define public_65f6151 _public_65f6151
#define public_65f615e _public_65f615e
#define public_65f6160 _public_65f6160
#define public_65f616c _public_65f616c
#define public_65f6196 _public_65f6196
#define public_65f61ae _public_65f61ae
#define public_65f61be _public_65f61be
#define public_65f61c8 _public_65f61c8
#define public_65f61eb _public_65f61eb
#define public_65f61fe _public_65f61fe
#define public_65f6209 _public_65f6209
#define public_65f620c _public_65f620c
#define public_65f6216 _public_65f6216
#define public_65f623f _public_65f623f
#define public_65f6252 _public_65f6252
#define public_65f625f _public_65f625f
#define public_65f6261 _public_65f6261
#define public_65f6264 _public_65f6264
#define public_65f6267 _public_65f6267
#define public_65f626a _public_65f626a

PROC_DECLARE(0x65f5ec0, internal_65f5ec0, public_65f5ec0);
extern "C" NAKED register_t __cdecl internal_65f5ec0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_65f6620
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_65f5f02
        mov eax, dword ptr ds : [esi+8]
        public_65f5ee4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_65f5f87
        mov dword ptr ds : [ecx+4], eax
        jmp public_65f5f95
        public_65f5f02 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_65f5f0d
        mov eax, edx
        jmp public_65f5ee4
        public_65f5f0d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        jne public_65f5f21
        public_65f5f16 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x19]
        test bl, bl
        je public_65f5f16
        public_65f5f21 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_65f5ee4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f5f3d
        mov dword ptr ds : [eax+4], ecx
        jmp public_65f5f54
        public_65f5f3d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_65f5f54 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_65f5f61
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f5f6f
        public_65f5f61 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_65f5f6c
        mov dword ptr ds : [edx], ecx
        jmp public_65f5f6f
        public_65f5f6c : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f5f6f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x18]
        mov dl, byte ptr ds : [ecx+0x18]
        mov byte ptr ds : [ecx+0x18], bl
        mov byte ptr ds : [esi+0x18], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_65f5ff2
        public_65f5f87 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_65f5f92
        mov dword ptr ds : [ecx], eax
        jmp public_65f5f95
        public_65f5f92 : nop
        mov dword ptr ds : [ecx+8], eax
        public_65f5f95 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_65f5fc3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f5faa
        mov edx, dword ptr ds : [esi+4]
        jmp public_65f5fc0
        public_65f5faa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_65f5fc0
        public_65f5fb5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_65f5fb5
        public_65f5fc0 : nop
        mov dword ptr ss : [ebp], edx
        public_65f5fc3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_65f5ff2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f5fd7
        mov edx, dword ptr ds : [esi+4]
        jmp public_65f5fef
        public_65f5fd7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        mov edx, eax
        jne public_65f5fef
        public_65f5fe3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x19]
        test bl, bl
        je public_65f5fe3
        public_65f5fef : nop
        mov dword ptr ss : [ebp+8], edx
        public_65f5ff2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x18]
        mov bl, 1
        cmp dl, bl
        jne public_65f626a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_65f6267
        nop 
        public_65f6010 : nop
        cmp byte ptr ds : [eax+0x18], bl
        jne public_65f6267
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_65f60cf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_65f607b
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f604f
        mov dword ptr ds : [esi+4], ecx
        public_65f604f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f6062
        mov dword ptr ds : [esi+4], edx
        jmp public_65f6070
        public_65f6062 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f606d
        mov dword ptr ds : [esi], edx
        jmp public_65f6070
        public_65f606d : nop
        mov dword ptr ds : [esi+8], edx
        public_65f6070 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_65f607b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_65f608e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        je public_65f6139
        public_65f608e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_65f616c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f60b5
        mov dword ptr ds : [esi+4], ecx
        public_65f60b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f6151
        mov dword ptr ds : [esi+4], edx
        jmp public_65f6160
        public_65f60cf : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_65f6122
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f60f5
        mov dword ptr ds : [esi+4], ecx
        public_65f60f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f6108
        mov dword ptr ds : [esi+4], edx
        jmp public_65f6117
        public_65f6108 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f6115
        mov dword ptr ds : [esi+8], edx
        jmp public_65f6117
        public_65f6115 : nop
        mov dword ptr ds : [esi], edx
        public_65f6117 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_65f6122 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_65f61c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_65f61c8
        public_65f6139 : nop
        mov byte ptr ds : [ecx+0x18], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65f6010
        jmp public_65f6267
        public_65f6151 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f615e
        mov dword ptr ds : [esi+8], edx
        jmp public_65f6160
        public_65f615e : nop
        mov dword ptr ds : [esi], edx
        public_65f6160 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_65f616c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f6196
        mov dword ptr ds : [esi+4], ecx
        public_65f6196 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f61ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f6264
        public_65f61ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f61be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f6264
        public_65f61be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_65f6264
        public_65f61c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x18], bl
        jne public_65f6216
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x18], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x18], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f61eb
        mov dword ptr ds : [esi+4], ecx
        public_65f61eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f61fe
        mov dword ptr ds : [esi+4], edx
        jmp public_65f620c
        public_65f61fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_65f6209
        mov dword ptr ds : [esi], edx
        jmp public_65f620c
        public_65f6209 : nop
        mov dword ptr ds : [esi+8], edx
        public_65f620c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_65f6216 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x18]
        mov byte ptr ds : [ecx+0x18], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x18], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x18], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_65f623f
        mov dword ptr ds : [esi+4], ecx
        public_65f623f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_65f6252
        mov dword ptr ds : [esi+4], edx
        jmp public_65f6261
        public_65f6252 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_65f625f
        mov dword ptr ds : [esi+8], edx
        jmp public_65f6261
        public_65f625f : nop
        mov dword ptr ds : [esi], edx
        public_65f6261 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f6264 : nop
        mov dword ptr ds : [ecx+4], edx
        public_65f6267 : nop
        mov byte ptr ds : [eax+0x18], bl
        public_65f626a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6600bb0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f5ec0)
    }
}

#undef public_65f5ee4
#undef public_65f5f02
#undef public_65f5f0d
#undef public_65f5f16
#undef public_65f5f21
#undef public_65f5f3d
#undef public_65f5f54
#undef public_65f5f61
#undef public_65f5f6c
#undef public_65f5f6f
#undef public_65f5f87
#undef public_65f5f92
#undef public_65f5f95
#undef public_65f5faa
#undef public_65f5fb5
#undef public_65f5fc0
#undef public_65f5fc3
#undef public_65f5fd7
#undef public_65f5fe3
#undef public_65f5fef
#undef public_65f5ff2
#undef public_65f6010
#undef public_65f604f
#undef public_65f6062
#undef public_65f606d
#undef public_65f6070
#undef public_65f607b
#undef public_65f608e
#undef public_65f60b5
#undef public_65f60cf
#undef public_65f60f5
#undef public_65f6108
#undef public_65f6115
#undef public_65f6117
#undef public_65f6122
#undef public_65f6139
#undef public_65f6151
#undef public_65f615e
#undef public_65f6160
#undef public_65f616c
#undef public_65f6196
#undef public_65f61ae
#undef public_65f61be
#undef public_65f61c8
#undef public_65f61eb
#undef public_65f61fe
#undef public_65f6209
#undef public_65f620c
#undef public_65f6216
#undef public_65f623f
#undef public_65f6252
#undef public_65f625f
#undef public_65f6261
#undef public_65f6264
#undef public_65f6267
#undef public_65f626a
